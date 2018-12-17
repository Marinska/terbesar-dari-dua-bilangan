#include <stdio.h>
int main()
{
	int a,b;
	printf("Masukan bilangan pertama : ");
	scanf("%d",&a);
	printf("Masukan bilangan kedua : ");
	scanf("%d",&b);
	if(a>b){
		printf("Bilangan terbesar adalah %d",a);
	}else{
		printf("Bilangan terbesar adalah %d",b);
	}
}
