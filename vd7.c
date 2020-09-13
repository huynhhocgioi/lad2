#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double d,a,b1,b2;
	
	printf("Nhap duong kinh hinh tron:  ");
	scanf("%1f",&d);
	
	printf("Nhap do dai canh hinh vuong:  ");
	scanf("%1f",&a);
	
	printf("Nhap do dai canh thu 1 hinh chu nhat: ");
	scanf("%1f",&b1);
	printf("Nhap do dai canh thu 2 hinh chu nhat: ");
	scanf("%1f",&b2);
	
	printf("Chu vi hinh tron co duong kinh la %1f la %1f",d,d*3.14);
	printf("\nDien tich hinh tron co duong kinh la %1f la %1f",d,d*d*3.14/4);
	
	printf("\nChu vi hinh vuong co canh la %1f la %1f",a,a*4);
	printf("\nDien tich hinh vuong co canh la %1f la %1f",a,a*a);
	
	Printf("\nChu vi hinh chu nhat co 2 canh la %1f va %1f : %1f",b1,b2,(b1+b2)*2);
	printf("\nDien tich hinh chu nhat co 2 canh la %1f va %1f : %1f",b1,b2,b1*b2);
	
	return 0;
}
