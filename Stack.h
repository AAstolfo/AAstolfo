#pragma once
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
void STpushback(ST* ps, typee x);
void STInit(ST* ps);
void STDestroy(ST* ps);
void STpop(ST* ps);
bool STEmpty(ST* ps);
typee STTop(ST* ps);
