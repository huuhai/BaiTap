// BaiTap4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, doCao;

	printf("Chuong trinh in ra man hinh tam giac can dac co do cao h (h nhap tu ban phim)\n\n");

	while(true){
		printf("Nhap vao do cao: ");
		scanf_s("%d", &doCao);
		printf("\n");
		for(i=0; i<doCao; i++){
			printf("\t\t");
			for(j=0; j<doCao-(i+1); j++){
				printf(" ");
			}
			for(j=0; j<(2*i+1); j++){
				printf("*");
			}
			printf("\n");
		}
	}
	_getch();
}

