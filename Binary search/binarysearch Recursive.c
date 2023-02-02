#include<stdio.h>
int binaryrec(int a[],int n,int num,int l,int h)
{
	int mid;
	mid=(l+h)/2;
	if(l>h)
	{
		printf("numbr s not found");
}
	else if(a[mid]==num)
	{
		printf("element is at pos %d",mid+1);
		}
		else if(a[mid]>num)
		{
			binaryrec(a,n,num,l,mid-1);
			}
			else if(a[mid]<num)
			{
				binaryrec(a,n,num,mid-1,h);
				}
				else
				{
					printf("no");
					}
					}
int main()
{
	int a[100],num,mid,i,n;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);   
	}
	printf("enter key to search");
	scanf("%d",&num);
	binaryrec(a,n,num,0,n-1);
	}
					
