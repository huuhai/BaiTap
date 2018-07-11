// BaiTap5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int ngay;
	int ngayMax;
	int thang;
	int nam;

	printf(" Chuong trinh nhap vao ngay, thang, nam.\n Kiem tra xem ngay, thang, nam do co hop le hay khong?\n +Neu khong-in ra man hinh 'khong hop le'.\n +Neu co-cho biet nam do co phai nam nhuan hay khong\n\n");
	
	while(true){
	printf("\nNgay: ");
	scanf_s("%d", &ngay);
	printf("Thang: ");
	scanf_s("%d", &thang);
	printf("Nam: ");
	scanf_s("%d", &nam);

	if((ngay>0 && ngay<=31) && (thang >0 && thang<12) && (nam>0)){
		if((nam%4==0 && nam%100!=0) || (nam%400==0)){
			switch(thang){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					ngayMax=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					ngayMax=30;
					break;
				case 2: 
					ngayMax=29;
					break;
			}
			if(ngay>ngayMax){
				printf("\nKo hop le !!!\n");
			}
			else{
				printf("\nLa nam nhuan\n");
			}
		}
		else if((nam%4!=0 && nam%100==0) || (nam%400!=0)){
			switch(thang){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					ngayMax=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					ngayMax=30;
					break;
				case 2: 
					ngayMax=28;
					break;
			}
			if(ngay>ngayMax){
				printf("\nKo hop le !!!\n");
			}
			else{
				printf("\nko la nam nhuan\n");
			}
		}
	}
	else{
		printf("\nKhong hop le !!!\n");
	}
	}
	_getch();
}

