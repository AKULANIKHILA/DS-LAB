#include<stdio.h>
int stack[100],choice,n,top=-1,x,i;
void push();
void pop();
void display();
int main()
{
	printf("enter the size of stack");
	scanf("%d",&n);
	printf("1.push\n 2.pop\n 3.display");
	do
	{
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
			       break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("exit");
				break;
		}
	}
	while(choice!=4);
}
void push()
{
    if(top>=n-1)
	printf("stack overflow");
	else
	printf("enter value to push");
	scanf("%d",&x);
	top++;
	stack[top]=x;
}
void pop()
{
	if(top<=-1)
	{
		printf("stack underflow");
	}
	else
	{
		x=stack[top];
		printf("the popped element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\nThe elements in stack");
		for(i=top;i>=0;i--)
		printf("\n%d",stack[i]);
		printf("press next choice");
	}
	else
	{
		printf("stack is empty");
	}
}
