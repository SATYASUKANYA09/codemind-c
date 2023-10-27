#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1>35&&s2>35&&s3>35&&s4>35&&s5>35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}