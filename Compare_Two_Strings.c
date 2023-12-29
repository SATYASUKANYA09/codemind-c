#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	scanf("%[^
]s",s1);
	scanf(" %[^
]s",s2);
	int res=strcmp(s1,s2);
	if(res==0)
	{
		printf("Strings are Equal");
		
	}
	else 
	{
	    printf("Strings are not Equal");
	}
}