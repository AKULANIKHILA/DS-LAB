#include<stdio.h>
int recursiveLS(int a[],int key,int n,int index)
{
	int pos=0;
	if(index>=n)
	{
		return 0;
	}
	else if(a[index]==key)
	{
		pos=index+1;
		
		return pos;
	}
	else
	{
		return recursiveLS(a,key,n,index+1);
	}
	return pos;
}
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
	pos=recursiveLS(a,key,n,0);
	if(pos!=0)
	{
		printf("elements found at pos is %d",pos);
	}
	else
	{
		printf("elements not found");
	}
}
