#include"Queue.h"
QueueNode* BuyQueuenewnode(typee x)
{
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}
void Queuepush(Queue* pq, typee x)
{
	assert(pq);
	QueueNode* newnode = BuyQueuenewnode(x);
	if (pq->head == NULL)
	{
		pq->head = newnode;
		pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->head;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}
void Queuepop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	QueueNode* next = pq->head->next;
	
		free(pq->head);
		if (!next)
			pq->tail = NULL;
		pq->head =next;
}
int QueueSize(Queue* pq)
{
	assert(pq);
	int n = 0;
	QueueNode* cur = pq->head;
	while (cur)
	{
		n++;
		cur = cur->next;
	}
	return n;
}
typee QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;   
}