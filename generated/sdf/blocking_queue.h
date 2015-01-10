#ifndef BLOCKINGQUEUE_H
#define BLOCKINGQUEUE_H
#include <queue>

#include <boost/thread/mutex.hpp>
#include <boost/thread/condition_variable.hpp>
template<typename T>
class BlockingQueue
{
public:
    void push(T const& data)
    {
        boost::mutex::scoped_lock lock(mtx);
        queue.push(data);
        lock.unlock();
        cond_var.notify_one();
    }

public:
    void pop(T& popped_value)
    {
        boost::mutex::scoped_lock lock(mtx);
        while (queue.empty())
        {
            cond_var.wait(lock);
        }
        popped_value = queue.front();
        queue.pop();
    }

public:
    size_t size() const
    {
        boost::mutex::scoped_lock lock(mtx);
        return queue.size();
    }

private:
    std::queue<T> queue;
    mutable boost::mutex mtx;
    boost::condition_variable cond_var;
};
#endif // BLOCKINGQUEUE_H
