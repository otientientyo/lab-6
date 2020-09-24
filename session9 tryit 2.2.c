#include<stdio.h>
main(){
	int num1,a,b,num2,i;
	printf("Enter num1:   ");
	scanf("%d",&num1);
	printf("\nEnter num2:   ");
	scanf("%d",&num2);
	if(num1>num2){b=num1;a=num2;} 
	else {a=num1;b=num2;}
	for(i>=a;i<=b;i++){
		if(i%2!=0)printf("%d\t",i);
	}
}
