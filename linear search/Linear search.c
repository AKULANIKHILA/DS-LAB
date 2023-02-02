#include<stdio.h>
int linear(int a[],int,int);
int main()

{
	int a[100],n,key,pos,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);   
	}
	printf("enter key to search");
	scanf("%d",&key);
	pos=linear(a,n,key);
	if(pos==-1)
	{
		printf("elements not found");
	}
	else
	{
		printf("element is found at %d pos",pos+1);
		}
		}
		int linear(int a[],int n,int key)
		{
			int i;
			for(i=0;i<n;i++)
			{
				if(a[i]==key)
				{
					return i;
				}
				}
			} 

				
