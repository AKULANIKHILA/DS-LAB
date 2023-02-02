include<stdio.h>
#include<stdlib.h>
#define MAX 50
int size;
struct stack{
	int arr[MAX];
	int top;
};
void init_stk(struct stack*st)
{
	st->top=-1;
}
void push(struct stack*st,int num)
{
	if(st->top==size-1)
	{
		printf("\n stack overflow");
		return 0;

	}
	st->top++;
	st->arr[st->top]=num;
}
int pop(struct stack*st)
{
	int num;
	if(st->top==-1)
	{
		printf("\n stack underflow");
		return NULL;
	}
	num=st->arr[st->top];
	st->top--;
	return num;
}
void display(struct stack*st)
{
	int i;
	for(i=st->top;i>=0;i--)
		printf("\n %d",st->arr[i]);
}
int main()
{
	int element,opt,val;
	struct stack ptr;
	init_stk(&ptr);
	printf("\n enter stack size");
	scanf("%d",&size);
	while(1)
	{
		printf("\n stack operatins");
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n 4.exit");
		printf("/n");
		printf("\n enter your option");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("\n enter the element into stack");
			       scanf("%d",&val);
			       push(&ptr,val);
			       break;
			case 2:
			       element=pop(&ptr);
			       printf("\n the element popped is %d",element);
			       break;
			case 3:
			       printf("\n the current stack element are:");
			       display(&ptr);
			       break;
			 case 4:
			       exit(0);
			 default:
			       printf("\n enter correct option");
		}
	}


}
