#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float Top,Bottom,Height;
	float dientich;
	int num;
	
	printf("nhap Top: ");
	scanf("%f",&Top);
	printf("nhap Bottom: ");
	scanf("%f",&Bottom);
	printf("nhap Height: ");
	scanf("%f",&Height);
	
	dientich = Height * (Top + Bottom) / 2;
	printf("dientich=%2f",dientich);
	
	
	
	
	return 0;
}
