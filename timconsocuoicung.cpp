//nhap mang so nguyen tim so le cuoi cung cua mang
#include <stdio.h>
int main()
{
	int n;
	do{
		printf("\nmoi nhap vao so luong phan tu mang");
		scanf("%d",&n);
		if(n<0)
		printf("vui long nhap lai");
	}while(n<=0);
	int pain[n];
	for(int i = 0;i<n;i++)
	{
		printf("nhap vao phan tu cua mang pain");
		scanf("%d",&pain[i]);
    }
    int x;
    for(int i=0;i<n;i++)
    {
    	if(pain[i]%2 !=0)
    	{
    	x=pain[i];
    	continue;
		}
	}
	if(x>0)
	printf("so le cuoi cung cua mang la %d\n",x);
}

	
	
	
	
