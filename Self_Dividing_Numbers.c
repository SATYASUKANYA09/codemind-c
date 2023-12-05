#include<stdio.h>
int self_div(int);
int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(self_div(i))
	   { 
		printf("%d ",i);
	   }
	}

}
int self_div(int n)
{
    int r,flag=1,t=n; 
	while(n!=0)
	{
		r=n%10;
		if(r==0 || t%r!=0)
		{
			flag=0;
			break;
	   }
		n=n/10;
	}
	if(flag==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}