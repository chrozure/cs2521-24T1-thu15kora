#ifndef QUEUE_H

typedef struct queue *Queue;

// Creates a new empty queue
Queue QueueNew(void);

// Enqueues an item onto the queue
void QueueEnqueue(Queue q, int item);

// Dequeues an item from the queue and returns it
// Assumes that the queue is not empty
int QueueDequeue(Queue q);

#endif
