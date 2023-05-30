#include<stdio.h>
int main () {
	int a;

		do {
	
	printf("Nhap diem cho hoc sinh: ");
	scanf("%d", &a);
	
	if (a>89 && a<101) 
		printf("A\n");
	else if (a>79 && a<90)
		printf("B\n");
	else if (a> 69 && a<80)
		printf("C\n");
	else if (a>59 && a<70)
		printf("D\n");
	else if (a<60)
		printf("F\n");
	else 
		printf("Khong hop le\n");
	
	} while (a<101 && a>0);
	
	
	
	
	
	
	

		
}
