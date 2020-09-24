#include<stdio.h>
main()
{
	int st,num,i,sum=0;
	printf("So so hang can tinh tong:   ");
	scanf("%d",&i);
	for (st=1; st<=i;st++)
	{	printf("\nNhap so hang thu %d:  ", st);
			
			scanf("%d",&num);
			sum+=num;				//sum=sum+num 
				
}			printf("Tong cua cac so da nhap vao la: %d", sum);	
	}

