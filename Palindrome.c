#include<stdio.h>
int main()
{
	int n,i,r,rev=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
	   	r=n%10;
		rev=rev*10+r;
	    n=n/10;
	}
	if(t==rev)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}