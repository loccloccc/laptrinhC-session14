#include<stdio.h>
#include<string.h>

int main()
{
	int dem = 0 ; 
	char str[1000];
	
	printf("Moi ban nhap chuoi : \n");
	fgets(str,1000,stdin);
	printf("Chuoi ban vua nhap : \n");
	fputs(str,stdout);
	
	
	for(int i = 0 ; i < strlen(str)-1 ; i++)
	{
		if(str[i] !=' ')
		{
			dem++;
		}
	}

	printf("So tu co trong chuoi la : %d",dem);
	return 0 ; 
	
	
}