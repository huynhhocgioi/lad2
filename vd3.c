#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float num1, num2;
	float tong, hieu, tich, thuong;
	int num;
	printf("nhap so num1: ");
	scanf("%f", &num1);
	printf("nhap so num2: ");
	scanf("%f", &num2);
	
	tong= num1 + num2;
	hieu= num1 - num2;
	tich= num1 * num2;
	thuong= num1 / num2;
	printf("Tong=%f\n",tong);
	printf("Hieu=%f\n",hieu);
	printf("Tich=%f\n",tich);
	printf("Thuong=%f\n",thuong);
	
	return 0;
}
