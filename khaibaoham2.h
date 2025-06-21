#include <stdio.h>

int tongcacchuso(int n)
{
	int tong = 0;
	while(n>0)
	{
		tong=tong + n%10;
		n =n/10;
	}
	return tong;
}
int GCD(int a,int b) // nguyen ly tim GCD(ucln) euclid
{
	while(b!=0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
int BCNN(int a,int b) // tim boi chung nho nhat 
{
	int bcnn = (a*b) / GCD(a,b) ;
	return bcnn;
}
int 
