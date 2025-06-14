#include <stdio.h> // tinh tong cac chu so cua mot so nguyen n
int main(){
	int n ;
	printf("nhap n = ");
	scanf("%d",&n);
	int tong = 0;
	
	while(n>0){
		n%10;
		tong = tong +n;
		n = n-1;
	}
	
	
		printf("tong cac gia tri so nguyen la %d",tong);
	}
	

