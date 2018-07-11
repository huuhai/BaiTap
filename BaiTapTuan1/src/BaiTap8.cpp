// BaiTap8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "conio.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char chuoi[100];

	printf("Chuong trinh dao xau. dau vao la 1 xau ky tu bat ky(nhap tu ban phim),\nin ra man hinh xau da dao nguoc\n\n");

	while(true){
		printf("Nhap vao 1 xau ky tu: ");
		gets_s(chuoi);
		printf("%s\n", _strrev(chuoi));
	}
	_getch();
}

