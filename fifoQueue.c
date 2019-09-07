#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

struct fifoQueue create newQueue(){
	struct fifoQueue queue;
	queue.read=0;
	queue.write=0;
	queue.size=0;
	return queue;
}

void addQueue(struct fifoQueue *queue, struct job j){
	if(queue->size+1>=
}

bool emptyQueue(struct fifoQueue *queue){
	return queue->write==queue->read;
}