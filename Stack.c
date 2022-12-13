#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int typee;
typedef struct Stack {
	typee* a;
	int top;
	int capacity;
}ST;
void STpushback(ST* ps, typee x)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		ps->capacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
		ps->a =(typee*) realloc(ps->a, sizeof(typee) * ps->capacity);
	}
	(ps->a)[ps->top] = x;
	(ps->top)++;
}
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}
void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->capacity = 0;
	ps->top = 0;
}
void STpop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	(ps->top)--;

}
int main()
{
	ST st;
	STInit(&st);
	STpushback(&st, 1);
	STpushback(&st, 2);
	STpushback(&st, 3);
	STpushback(&st, 4);
	STDestory(&st);
	return 0;

}
