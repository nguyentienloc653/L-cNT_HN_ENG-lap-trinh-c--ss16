#include<stdio.h>
void in(int *arr, int *length){
	for(int i=0; i<length; i++){
		printf("[%d]=%d\n", i, *(arr+i));
	}
}
int main(){
	int arr[]={2,3,1,2,6,9,6,2,5};
	int length=sizeof(arr)/sizeof(int);
	in(arr, length);
	return 0;
}
