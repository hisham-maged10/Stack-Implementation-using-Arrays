/**
 * @author ${hisham_maged10}
 *https://github.com/hisham-maged10
 * ${DesktopApps}
 */
#include <stdio.h>
#include <stdlib.h>
#define type int
#define MAX_SIZE 3
typedef struct
{
    int top;
    type data[MAX_SIZE];
}stack;
void push(stack*s,type value)
{
    if(!isfull(s))
    s->data[++s->top]=value;
    else
        printf("Stack is full\n");
}
type pop(stack*s)
{
    if(!isempty(s))
    {
        return s->data[s->top--];
    }
    else
    {
        printf("Error nothing to be popped\n");
        return -1;
    }
}
int isempty(stack*s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}
int isfull(stack*s)
{
    if(s->top==MAX_SIZE-1)
        return 1;
    else
    return 0;
}
void initializestack(stack*s)
{
    s->top=-1;
}
type top(stack*s)
{
    if(!isempty(s))
    return s->data[s->top];
    else
        printf("Stack is empty\n");
}
int size(stack*s)
{
    return s->top+1;
}

int main()
{
   stack s;
    initializestack(&s);
    printf("Size:%d\n",size(&s));
    printf("Push 5\n");
    push(&s,5);
    printf("Size:%d\n",size(&s));
    printf("pop:%d\n",pop(&s));
    printf("Size:%d\n",size(&s));
    printf("Pop:%d\n",pop(&s));
    printf("Size:%d\n",size(&s));
    printf("---------------\n");
    printf("push 5,9,2\n");
    push(&s,5); push(&s,9); push(&s,2);
    printf("Size:%d\n",size(&s));
    printf("Trying to push 14\n");
    push(&s,14);
    printf("Size:%d\n",size(&s));
    printf("Pop:%d\n",pop(&s));
    printf("Size:%d\n",size(&s));
    printf("Pop:%d\n",pop(&s));
    printf("Size:%d\n",size(&s));
    printf("Pop:%d\n",pop(&s));
    printf("Size:%d\n",size(&s));
    printf("Pop:%d\n",pop(&s));
    printf("Size:%d\n",size(&s));
    return 0;
}
