#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()  {
	float toan, ly, hoa;
	float tong, trungbinhcong;
	int num;
	printf("nhap diem toan: ");
	scanf("%f", &toan);
	printf("nhap diem ly: ");
	scanf("%f", &ly);
	printf("nhap diem hoa: ");
	scanf("%f",&hoa);
	
	tong= toan+ly+hoa;
	trungbinhcong=tong/2;
	printf("tong=%f\n",tong);
	printf("trungbinhcong=%f",trungbinhcong);
	
	return 0;
}
	
