#ifndef DATASTORAGEPROVIDER_H
#define DATASTORAGEPROVIDER_H

#include "blocking_queue.h"

// %Tag(QUEUE_INITIALIZATION)%

// %Tag(QUEUE_INCOMING_DATA)%
BlockingQueue<double> in_A;
BlockingQueue<double> in_C;
BlockingQueue<double> in_B;
// %EndTag(QUEUE_INCOMING_DATA)%


// %Tag(QUEUE_OUTGOING_DATA)%
BlockingQueue<double> out;
// %EndTag(QUEUE_OUTGOING_DATA)%


// %Tag(QUEUE_INTERNAL_DATA)%
BlockingQueue<double> a1;
BlockingQueue<double> b1;
BlockingQueue<double> c1;
BlockingQueue<double> a2;
BlockingQueue<double> b2;
BlockingQueue<double> c2;
BlockingQueue<double> a3;
BlockingQueue<double> b3;
BlockingQueue<double> c3;
BlockingQueue<double> a4;
BlockingQueue<double> b4;
BlockingQueue<double> c4;
// %EndTag(QUEUE_INTERNAL_DATA)%

// %EndTag(QUEUE_INITIALIZATION)%

#endif // DATASTORAGEPROVIDER_H

