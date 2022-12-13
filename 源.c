#include"Queue.h"
void QueueTest1()
{
	Queue  p;
	QueueInit(&p);
	Queuepush(&p, 1);
	Queuepush(&p, 2);
	Queuepush(&p, 3);
	Queuepush(&p, 4);
	Queuepush(&p, 20);
	int n = QueueSize(&p);
	printf("size=%d\n",n );

	while (n--)
	{
		printf("%d ", QueueFront(&p));
		Queuepop(&p);
	}


	QueueDestroy(&p);
}
int main()
{
	QueueTest1();
	return 0;
}