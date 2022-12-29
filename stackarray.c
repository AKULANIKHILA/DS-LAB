#include<stdio.h>
int stack[100],choice,n,top=-1,x,i;
void push();
void pop();
int main(){
 
 printf("enter thesize of stack");
 scanf("%d",&n);
 printf("1.push\n 2.pop\n 3.display\n");
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
	 }

 } while(choice!=4);
}
void push(){
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
	if(top==-1)
		printf("stack underflow");
	else
		printf("poped elemnt is%d",stack[top]);
	        top--;
}
void display()
{
	int i;
	if(top>=-1)
	{
		printf("elements in stack");
	        for(i=top;i>=0;i--)
		{
		 printf("%d",stack[i]);
		}
	}
	else
		printf("stack is empty");
}


