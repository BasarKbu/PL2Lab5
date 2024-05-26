#include<stdio.h>

int main(){
	int a,b;
	int *ap,*bp;
	printf("Enter the first number: \n"); scanf("%d",&a);
	printf("Enter the second number: \n"); scanf("%d",&b);
	ap = &a;
	bp = &b;
	printf("Sum of the two numbers is:%d ",*ap + *bp);
	
	return 0;
}
