#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
      for(j=n-1;j>=i;j--)
    {
        printf(" ");
    }
    for(k=i;k>=1;k--)
    {
        printf("%c ",i+64);
    }
    printf("
");
    }
    return 0;
}