#include<stdio.h>
#include<string.h>

int main()
{
	int dem = 0 ; 
	char str[1000];
	char  chara;
	printf("Moi ban nhap chuoi : \n");
	fgets(str,1000,stdin);
	printf("Chuoi ban vua nhap : \n");
	fputs(str,stdout);
	printf("Moi ban nhap vao mot ki tu bat ki : ");
	scanf("%c",&chara);
	
	for(int i = 0 ; i < strlen(str)-1 ; i++)
	{
		if(str[i]==chara)
		{
			dem++;
		}
	}

	printf("So lan xuat hien cua ki tu %c la %d",chara,dem);
	return 0 ; 
	
	
}