#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	printf("Moi ban nhap: \n");
	fgets(str,1000,stdin);
	printf("chuoi ban vua nhap : \n");
	fputs(str,stdout);
	printf("In dao nguoc :");
	for(int i = strlen(str) ; i >= 0 ; i-- )
	{
		printf("%c ",str[i]);
	}
	return 0 ; 	
}