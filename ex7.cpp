#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char str[1000];
	printf("Moi ban nhap chuoi :");
	fgets(str,1000,stdin);
	printf("Chuoi ban vua nhap la :");
	fputs(str,stdout);
	int length = strlen(str); 
	int chu = 0 , so = 0 ,kitu=0 ;
	for(int i = 0 ; i < length ; i++)
	{
		if(isalpha(str[i]))
		{
			chu++;
		}
		else if(isdigit(str[i]))
		{
			so++;
		}
		else
		{
			kitu++;
		}
	}
	
	
	printf("%d va %d va %d",chu,so,kitu);
	return 0 ; 
}