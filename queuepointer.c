#include<stdio.h>
#define true 1
#define false 0
struct q_point
{
	int ele;
	struct q_point *n;
};
struct q_point *f_ptr=NULL;
int element_que();
void add_element();
int rem_element();
void main()
{
	int ele,choice,j;
	while(1)
	{
		//clrscr();
		printf("IMPLEMENTATION OF QUEUE USING POINTER");
		printf("--------------");
		printf("\n\n\t menu\n");
		printf("--------------");
		printf("to insertan element");
		printf("to remove an element");
		printf("to display all the element");
		printf("exit");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("element to be inserted");
				scanf("%d",&ele);
				add_element(ele);
				//getch();
				break;
			case 2:
				if(!element_que())
				{
					j = rem_element();
					printf("\n\t %d is removed from the queue");
				}
				else{
					printf("queue is empty");
					break;
				    }
		        case 3:
				show_ele();
				break;
			case 4:
				exit(1);
				break;
		}
	}
}

int element_que(void)
{
		   if(f_ptr==NULL)
		   return true;
		   return false;
}
void add_element(int ele)
{
			int ptr;
			struct q_point *queue =(struct q_point*)malloc(sizeof(struct q_point));
			queue->ele=ele;
			queue->n=NULL;
			   if(f_ptr == NULL)
			         f_ptr = queue;
			   else 
			   {
				   struct q_point *ptr;
				   ptr = f_ptr;
			   }
			for(ptr = f_ptr->n!=NULL ;ptr=ptr->n)
			{
				ptr->n =queue;
			}
}
int rem_element()
{
		 struct q_point *queue=NULL;
		 if(element_que()==false)
		 {
		   int j=f_ptr->ele;
		   queue = f_ptr;
		   f_ptr=f_ptr->n;
		   free(queue);
		   return j;
		   }
		 else
		 {
		    printf("q is empty");
		    return -9999;
		    }
}
void show_ele()
{
		    struct q_point *ptr=NULL;
		    ptr = f_ptr;
                    if(element_que())
		    {
			    printf("q is empty");
			    return;
		    }
		    else
		    {
			    printf("elemets in q are");
			    while(ptr!=NULL)
			    {
				    printf("%d",ptr->ele);
				    ptr = ptr->n;
			    }
		    }
	    }






