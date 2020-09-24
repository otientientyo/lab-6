#include<stdio.h>
main(){
	int a=0,b=1,c;
	printf("1\n");
	for(;;){
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
