// BaiTap1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int soNguyen;
	int hangTram;
	int	hangChuc; 
	int hangDonVi;
	int trungGian;
	int doiCho;

	printf(" Chuong trinh nhap vao 1 so nguyen n co 3 chu so (tu ban phim).\n In ra man hinh cac chu so theo thu tu giam dan\n\n");

	while(true){
		do{
			printf("\nNhap 1 so nguyen co 3 chu so: ");
			scanf_s("%d", &soNguyen);
			if((soNguyen<100 || soNguyen>999)){
				printf("\nKhong hop le\n");
			}
		}while(soNguyen<100 || soNguyen>999);

	/*
	123/100=1				tram
	
	1*100=100;	123-100=23; trungGian

	23/10=2					chuc
	
	2*10=20;	23-20=3		donvi
	*/
	
	hangTram=soNguyen/100;
	trungGian=soNguyen-(hangTram*100);
	hangChuc=trungGian/10;
	hangDonVi=trungGian-(hangChuc*10);
	
	//123
	if(hangTram<hangChuc){
		doiCho=hangTram;
		hangTram=hangChuc;
		hangChuc=doiCho;
	}
	if(hangTram<hangDonVi){
		doiCho=hangTram;
		hangTram=hangDonVi;
		hangDonVi=doiCho;
	}
	if(hangChuc<hangDonVi){
		doiCho=hangChuc;
		hangChuc=hangDonVi;
		hangDonVi=doiCho;
	}
	printf("\nCac chu so theo thu tu giam dan la: %d%d%d\n", hangTram, hangChuc, hangDonVi);
	}
	_getch();
}

