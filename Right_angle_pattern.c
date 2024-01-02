#include<stdio.h>
int main()
{
    int s,n;
    scanf("%d%d",&n,&s);
    int k=s+n*(n+1)*0.5-1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>j)
            printf("  ");
            else if(i==1 || i==j || j==n)
            {
                printf("%d ",k);
                k--;
            }
            else
			{
	            printf("  ");
	            k--;
         	}
        }printf("
");
    }
}