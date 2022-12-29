#include<stdio.h>
#include<stdlib.h>
#define max 50
int size;
struct stack{
	int arr[max];
	int top;
};
void init_stack(struct stack*st){
	st->top=-1;
}
void push(struct stack*st,int num)
{
	if(st->top==size-1){
		printf("\n stack overflow");
		return;
	}
	st->top++;
	st->arr[st->top]=num;
}
int pop(struct stack*st){
	int num;
	if(st->top==-1){
		printf("\n stack underflow");
		return NULL;
	}
	num = st->arr[st->top];
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
	init_stack(&ptr);
	printf("\n enter size");
	scanf("%d",&size);
	while(1){
		printf("\n stack operations");
		printf("\n 1 push\n 2.pop\n3.display");
		printf("\n exit");
		printf("\n");
		printf("\ enter optionn");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\n enter the element into stack ");
				scanf("%d",&val);
				push(&ptr,val);
				break;
			case 2:
				element = pop(&ptr);
				printf("\n the elemnt popped is%d",element);
				break;
			case 3:
				printf("\n the current stack elements are");
				display(&ptr);
				break;	
			case 4:
				exit(0);
				break;
			default:

				printf("enter corect option !try  again");
		}
	}
}

			
