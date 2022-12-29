#include<stdio.h>
int main()
{
	int a[10],m,n,low,high,result,key,i;
	printf("enter the vale of n");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	low=0;
	high=n-1;
	 m =low+high/2;
		    while(low<=high)
		    {
			    if(a[m]==key)
			    {
				    printf("element found at %d",m+1);
				    break;
			    }
			    else if(key<a[m])
				    low =m+1;
			    else
				    high=m-1;
		    }
	 if(low>high)
	 {
		 printf("element not found");
	 }
}




	

