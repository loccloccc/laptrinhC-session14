#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[] = "hello world";
	int length = sizeof(str)/sizeof(char);
	for(int i = 0 ; i < length ; i++)
	{
		if( i==0 || ( i > 1 && str[i-1]==' '))
		{
			str[i] -= 32;
		}
	}
	for(int i = 0 ; i < length-1 ; i++)
	{
		printf("%c",str[i]);
	}
	return 0 ; 
}