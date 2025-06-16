#include <stdio.h> //nhap vao 1 mang so nguyen n sau do nhap mot so x va tim x co trong mang khong
int main(){
	int size;
	do{
		printf("nhap vao so luong phan tu mang n");
		scanf("%d",&size);
		if(size<0)
		{
			printf("thang ngoo nhap lai ngay =)) :");
		}
	}while(size<=0);
	
	int v[size];
	
	for(int i =0;i<size;i++)
	    {
		printf("nhap vao phan tu mang [i] = ");
		scanf("%d",&v[i]);
    	}
    	printf("hien thi gia tri vua nhap [i] = ");
	for( int i = 0;i<size;i++)
		{	
		printf("%d",v[i]);	
		}
		int x;
		int c=0;
	//for(int i = 0;i<size;i++)
	//	{
		 printf("\nmoi nhap x vao mang");
		 scanf("%d",&x);
	//	}
	for(int i = 0;i<size;i++)
	    {
	
		if(x==v[i])
		{
		c = 1;
		break;
     	}
        }
     	if(c = 1)
		{
			printf("\nco %d x trong mang",x);
		}
		else
		{
			printf("\nkhong co %d x trong mang",x);
		}
	    }
		

	
        

