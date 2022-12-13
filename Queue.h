#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int typee;
typedef struct QueueNode {
	typee data;
	struct QueueNode* next;

}QueueNode;
typedef struct Queue {
	QueueNode* head;
	QueueNode* tail;
}Queue;
QueueNode* BuyQueuenewnode(typee x);
bool QueueEmpty(Queue* pq);
void QueueInit(Queue* pq);
void Queuepush(Queue* pq, typee x);
void QueueDestroy(Queue* pq);
void Queuepop(Queue* pq);
int QueueSize(Queue* pq);
typee QueueFront(Queue* pq);