#include<stdio.h>
#include<string.h>

int main()
{
	char string[100];
	printf("Moi ban nhap : ");
	fgets(string,1000,stdin);
	printf("chuoi vua nhap la : ");
	fputs(string,stdout);
	printf("\n");
	int length =  strlen(string); 
	printf("Do dai cua chuoi ban vua nhap la : %d",length);
	return 0 ; 
}
