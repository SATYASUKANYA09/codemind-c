#include<stdio.h>
int main()
{
	int sum=0,n;
	scanf("%d",&n);
	int arr[n],i;//reading array elements
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
}