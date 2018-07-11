#include "stdio.h"
#include "stdafx.h"
#include "string.h"
#include "conio.h"
	
int main(){
	char chuoi[100];
	int demHoa=0;
	int demThuong=0;

	printf("Nhap vao 1 xau tu ban phim, in ra man hinh so ky tu la chu cai hoa,\nso ky tu la chu cai thuong\n\n");
	
	do{
		printf("\nNhap vao 1 chuoi: ");
		gets_s(chuoi);
		for(int i=0; i<strlen(chuoi);i++){
			if((chuoi[i]>='A' && chuoi[i]<='Z') && (chuoi[i]!=' ')){
				demHoa++;
			}
			if((chuoi[i]>='a' && chuoi[i]<='z') && (chuoi[i]!=' ')){
				demThuong++;
			}
		}
		printf("\nSo ky tu hoa: %d\n", demHoa);
		printf("\nSo ky tu thuong: %d\n", demThuong);
	}while(true);
	_getch();
}