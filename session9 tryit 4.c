#include<stdio.h>
main(){
	int i,j,k;
	printf("Enter no. of row : ");
	scanf("%d", &i);
	printf("\n");
		for(j=i; j>=0;j--){
			printf("\n");
			for(k=1; k<=j;k++){
				printf("%d",k);
			}
		}

}
