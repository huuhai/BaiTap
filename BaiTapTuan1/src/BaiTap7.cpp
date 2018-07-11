// BaiTap7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

int UCLN(int m, int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int soThuNhat;
	int soThuHai;

	printf("Tim UCLN va BCNN cua 2 so nguyen duong\n\n");

	while(true){
		printf("Nhap 2 so nguyen duong: ");
		scanf_s("%d %d", &soThuNhat, &soThuHai);
		printf("UCLN: %d\n",UCLN(soThuNhat, soThuHai));
		printf("BCNN: %d\n",(soThuNhat*soThuHai)/(UCLN(soThuNhat,soThuHai)));
	}
	_getch();
}

int UCLN(int soThuNhat,int soThuHai){
	int soDu;
	while(soThuHai!=0){
		soDu=soThuNhat%soThuHai;
		soThuNhat=soThuHai;
		soThuHai=soDu;
	}
	return soThuNhat;
}