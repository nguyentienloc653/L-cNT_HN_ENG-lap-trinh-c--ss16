#include<stdio.h>
void tong(int *a, int *b, int *ketQua){
	*ketQua=*a+*b;	
}

int main(){
	int a=1;
	int b=2;
	int ketQua=0;
	tong(&a, &b, &ketQua);
	printf("Tong cua a va b la %d", ketQua);
	return 0;
}
