// nhap n, tim cac uoc va tinh tong cac uoc cua n
#include <stdio.h>
int main(){
	int n;
	printf("nhap n");
	scanf("%d",&n);
	int tong =0;
	for(int i =1;i<=n;i++){
		if(n % i == 0){
			tong = tong + i;
		}
	}
	printf("tong gia tri cua uoc n la %d",tong);
	
	
	
	
	
}
