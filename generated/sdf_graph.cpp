// %Tag(ROS_HEADER)%
#include "ros/ros.h"
#include "std_msgs/Float64.h"
// %EndTag(ROS_HEADER)%

// %Tag(BOOST_HEADER)%
#include <boost/thread/thread.hpp>
using namespace boost;
// %EndTag(BOOST_HEADER)%

// %Tag(SDF_HEADER)%
#include "sdf/scheduable_nodes.h"
#include "sdf/data_storage_provider.h"
// %EndTag(SDF_HEADER)%

// %Tag(ROS_PUBLISHER_INIT)%
ros::Publisher pub1;
// %EndTag(ROS_PUBLISHER_INIT)%

// %Tag(CALLBACK_FUNCTIONS)%
void A1_clb1(const std_msgs::Float64::ConstPtr& msg)
{
    ROS_INFO("I heard: [%lf] on topic 'in_A'", msg->data);
    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    in_A.push(msg->data);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%

}

void C1_clb1(const std_msgs::Float64::ConstPtr& msg)
{
    ROS_INFO("I heard: [%lf] on topic 'in_C'", msg->data);
    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    in_C.push(msg->data);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%

}

void B1_clb1(const std_msgs::Float64::ConstPtr& msg)
{
    ROS_INFO("I heard: [%lf] on topic 'in_B'", msg->data);
    // %Tag(DATA_STORAGE_PROVIDER_WRT)%
    in_B.push(msg->data);
    // %EndTag(DATA_STORAGE_PROVIDER_WRT)%

}

// %EndTag(CALLBACK_FUNCTIONS)%

// %Tag(THREADED_FUNCTIONS)%

void thread1_fct()
{
    for(int i=0;i<2; ++i)
        SDFnodes::A1();
    SDFnodes::A2();
    SDFnodes::A3();
    SDFnodes::A4();
}

void thread2_fct()
{
    SDFnodes::C1();
    SDFnodes::C2();
    SDFnodes::C3();
    SDFnodes::C4();
}

void thread3_fct()
{
    for(int i=0;i<2; ++i)
        SDFnodes::B1();
    for(int i=0;i<2; ++i)
        SDFnodes::B2();
    for(int i=0;i<2; ++i)
        SDFnodes::B3();
    SDFnodes::B4();
}

// %EndTag(THREADED_FUNCTIONS)%

// %Tag(SCHEDULING)%
void scheduling_fct() {
    while(true) {
        SDFnodes::C1();
        for (int a= 0; a<2; ++a)
            SDFnodes::A1();

        for (int b= 0; b<2; ++b)
            SDFnodes::B1();

        for (int c= 0; c<2; ++c)
            SDFnodes::B2();

        for (int d= 0; d<2; ++d)
            SDFnodes::B3();

        SDFnodes::C2();
        SDFnodes::C3();
        SDFnodes::A2();
        SDFnodes::A3();
        SDFnodes::C4();
        SDFnodes::A4();
        SDFnodes::B4();
        SDFnodes::M();
        //Publishing return message of 'M'
        std_msgs::Float64 double_msg;
        out.pop(double_msg.data);
        pub1.publish(double_msg);
    }
}
// %EndTag(SCHEDULING)%
// %Tag(SCHEDULING_THREADED)%
void thrScheduling_fct() {
    while(true) {
        thread thread1 = thread(thread1_fct);
        thread thread2 = thread(thread2_fct);
        thread thread3 = thread(thread3_fct);
        thread1.join();
        thread2.join();
        thread3.join();
        SDFnodes::M();
        //Publishing return message of 'M'
        std_msgs::Float64 double_msg;
        out.pop(double_msg.data);
        pub1.publish(double_msg);
    }
}
// %EndTag(SCHEDULING_THREADED)%

int main(int argc, char **argv)
{
    // %Tag(INIT)%
    ros::init(argc, argv, "sdf_graph_node");
    // %EndTag(INIT)%

    // %Tag(NODE_HANDLE)%
    ros::NodeHandle n;
    // %EndTag(NODE_HANDLE)%

    // %Tag(SUBSCRIBERS)%
    ros::Subscriber sub1 = n.subscribe("in_C", 100, C1_clb1);
    ros::Subscriber sub2 = n.subscribe("in_B", 100, B1_clb1);
    ros::Subscriber sub3 = n.subscribe("in_A", 100, A1_clb1);
    // %EndTag(SUBSCRIBERS)%

    // %Tag(PUBLISHERS)%
    pub1 = n.advertise<std_msgs::Float64>("out", 100);
    // %EndTag(PUBLISHERS)%

    thread thrScheduling = thread(thrScheduling_fct);
    // or sequential: thread seqScheduling = thread(scheduling_fct);
    ros::spin();
    return 0;
}

