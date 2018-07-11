// BaiTap6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char chuoi[100];
	int i;

	printf("Chuong trinh chuan hoa xau\n\n");

	while(true){
		printf("Nhap vao 1 chuoi:");
		gets_s(chuoi);
		strlwr(chuoi);
		while(chuoi[0]==' '){
			strcpy(&chuoi[0], &chuoi[1]);
		}
		for(i=0; i<strlen(chuoi); i++){
			if(chuoi[i]== ' ' && chuoi[i+1]==' '){
				strcpy(&chuoi[i], &chuoi[i+1]);
				i--;
			}
			if(chuoi[i+1]== ',' && chuoi[i]==' '){
				strcpy(&chuoi[i], &chuoi[i+1]);
				i--;
			}
			if(chuoi[i+1]== '.' && chuoi[i]==' '){
				strcpy(&chuoi[i], &chuoi[i+1]);
				i--;
			}
		}
		while(chuoi[strlen(chuoi)-1]==' '){
			chuoi[strlen(chuoi)-1]='\0';
		}
		printf("%s\n", chuoi);
	}
	return 0;
	_getch();
}

