#include<stdio.h>
int main()
{
int H,S,SF;
scanf("%d%d%d",&H,&S,&SF);
if(H>50 && S>60 && SF>100)
{
    printf("10");
}
else if(H>50 && S>60)
{
    printf("9");
}
else if(S>60 && SF>100)
{
    printf("8");
}
else if(H>50 && SF>100)
{
    printf("7");
}
else if(H>50 || S>60 ||SF>100)
{
    printf("6");
}
else
{
    printf("5");
}
 }