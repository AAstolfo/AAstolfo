#include"Stack.h"
void STpushback(ST* ps, typee x)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		ps->capacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
		ps->a = (typee*)realloc(ps->a, sizeof(typee) * (ps->capacity));
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
	assert(ps->top> 0);
	(ps->top)--;
}
typee STTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top-1];
}
bool STEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
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
