// BaiTap3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

int _tmain(int argc, _TCHAR* argv[])
{
	float giaMoCua=10000;
	float quangDuong;
	float tongTien;

	printf("Chuong trinh tinh tien cuoc taxi, biet rang:\n - Gia mo cua + km dau tien: 10.000 VND\n - Moi 200m tiep theo: 1.500 VND\n - Neu lon hon 30km thi moi km them tinh gia: 8000VND.\n Nhap vao so m da di tu ban phim, in ra man hinh so tien phai tra\n\n");

	while(true){
		do{
			printf("Nhap vao so m da di: ");
			scanf_s("%f", &quangDuong);
			if(quangDuong < 0){
				printf("Quang duong di phai lon hon hoac bang 0. Moi nhap lai !!!\n");
			}
		}while(quangDuong < 0);
		if(quangDuong <= 1000){
			tongTien = giaMoCua;
		}
		else if(quangDuong > 1000 || quangDuong <= 30000){
			tongTien = giaMoCua + ((float)((quangDuong-1000)*1500)/200);
		}
		else if(quangDuong > 30000){
			tongTien = giaMoCua + (float)(((30000-1000)*1500)/200) + (float)(((quangDuong-30000-1000)*8000)/1000);
		}
		printf("\nSo tien phai tra: %0.2f VND\n", tongTien);
	}
	_getch();
}

