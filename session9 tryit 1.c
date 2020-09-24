#include<stdio.h>
main()
{	int i=1,num,j=1;
	printf("Nhap 1 so vao ban phim:   ");
	scanf("%d",&num);
	for(j=1;j<10;j++){
		for(i=1;i<=9;i++){
		printf("%d * %d =%d\n", num, i, i*num);
	}printf("\n");
	}
	
}
