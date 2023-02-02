#include<stdio.h>
#include<stdlib.h>
#define maxsize  5
void insert();
void delet();
void display();
int front=-1,rear=-1;
int queue[maxsize];
int main()
{
	int choice;
	while(choice!=4)
	{
		printf("\n.................Mainmenu.......\n");
		printf("\n 1.insert an element \n 2.Delete an element\n 3.display the queue");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delet();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("enter valid choice");
		}
	}
}
void insert()
{
	int item;
	printf("\n enter the element");
	scanf("\n %d",&item);
	if(rear==maxsize-1)
	{
		printf("overflow");
		return;
	}
	else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	printf("\n value inserted");
}
void delet()
{
	int item;
	if(front==-1||front>rear)
	{
		printf("underflow");
		return;
	}
	else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("value deleted");
	}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("\n empty queue");
	}
	else
	{
		printf("printing values......\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
}
