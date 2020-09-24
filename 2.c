#include<stdio.h>
main()
{
	int st,num,i; // st: number of student, num: mask of student
	float sum=0; 

	int max,min;
	printf("Nhap so sinh vien trong lop:   ");
	scanf("%d",&st);
	for (i=1; i<=st;i++)
	{	printf("\nNhap diem so cua cac sinh vien thu %d:  ", i);	
			scanf("%d",&num);
			sum+=num;	//sum=sum+num 
		if(i==1){max=num;} else if (max<num){max=num;}
		if(i==1){min=num;} else if (min<num){min=num;}
			
		}	printf("Diem trung binh cua ca lop la: %.2f",sum/st);
			printf("\nDiem cao nhat trong lop la:  %d", max);
			printf("\nDiem thap nhat trong lop la:  %d", min);
	}
	

