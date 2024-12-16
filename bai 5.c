#include<stdio.h>
// x la gia tri y la vi tri
void newElement(int *arr, int x, int y){
	arr[y]=x;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int length=sizeof(arr)/sizeof(int);
	printf("Mang ban dau:\n");
	for(int i=0; i<length; i++){
		printf("[%d]", arr[i]);
	}
	
	printf("\n");
	newElement(arr, 10, 4);
	printf("Mang sau khi them phan tu:\n");
	for(int i=0; i<length; i++){
		printf("[%d]", arr[i]);
	}
	
	return 0;
}
