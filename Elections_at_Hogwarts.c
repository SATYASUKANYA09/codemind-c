#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>50&&y<x&&z<x)
    {
        printf("Gryffindor");
    }
    else if(y>50&&z<y&&x<y)
    {
       printf("Slytherin"); 
    }
    else if(z>50&&x<z&&y<z)
    {
        printf("Hufflepuff");
    }
    else
    {
        printf("NOTA");
}
}