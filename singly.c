#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*First = NULL;
void createlist(int A[],int n)
{
	int i;
	struct node*t,*last;
	First = (struct node*)malloc(sizeof(struct node));
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	First->data=A[0];
	First->next=NULL;
	last = First;
	for(i=0;i<n;i++)
	{
		t = (struct node*)malloc(sizeof(struct node));
		t->data = A[i];
		t->next = NULL;
		last ->next=t;
		last = t;
	}
}
void traverse()
{
	struct node*temp;
	if(First == NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp = First;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp = temp->next;
		}
	}
}
void insertatbeg()
{
	int info;
	struct node*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter element to be inserted");
	scanf("%d",&info);
	temp->data = info;
	temp->next = First;
	First = temp;
}
void insertatend()
{
	int info;
	struct node*temp,*head;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter number to insert at end");
	scanf("%d",&info);
	temp->next = 0;
	temp->data=info;
	head=First;
	while(head->next!=NULL)
	{
		head = head->next;
	}
	head->next = temp;
}
void insertatpos()
{
	struct node*temp,*newnode,*start;
	int pos,info,i=1;
	newnode = malloc(sizeof(struct node));
	printf("\n enter position to enter");
	scanf("%d %d",&pos,&info);
	temp = start;
	newnode->data=info;
	newnode->next=0;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deletefirst()
{
	struct node*temp,*start;
	if(start==NULL)
	{
		printf("\n list is empty");
                	}
	else
	{
		temp=start;
		start=start->next;
		free(temp);
	}
}
void deleteend()
{
	struct node*temp,*prenode,*start;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		temp=start;
		while(temp->next!=0)
		{
			prenode=temp;
			temp=temp->next;
		}
		free(temp);
		prenode->next=0;
	}
}
void deletepos()
{
	struct node*temp,*pos,*start;
	int i=1;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		printf("\n enter index");
		scanf("%d",&pos);
		pos=malloc(sizeof(struct node));
		temp = start;
		while(i<pos-1)
		{
			temp = temp->next;
			i++;
		}
		pos = temp->next;
		temp->next = pos->next;
		free(pos);
	}
}
int main()
{
	int A[100],n;
	createlist(A,n);
	int choice;
	while(1)
	{
		printf("\n1.to see list\n");
		printf("\n2.for insertion at starting");
		printf("\n3.for insertion at end");
		printf("\n4.for insertion at any pos");
		printf("\n5.for deleting at first");
		printf("\n6.for delete at last");
		printf("\n7.for delete at any pos");
		printf("\n8.exit");
		printf("\nenter choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				traverse();
				break;
			case 2:
				insertatbeg();
				break;
			case 3:
				insertatend();
				break;
			case 4:
				insertatpos();
				break;
			case 5:
				deletefirst();
				break;
			case 6:
				deleteend();
                                break;
			case 7:
				deletepos();
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("incorrect");
		}
	}
}
