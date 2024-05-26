#include<stdio.h>

int main(){
	int size,i,j;
	printf("Enter the size of the array: \n"); scanf("%d",&size);
	int array[size];
	
	for(i=0;i<size;i++){
		printf("%d.element is: ",i+1); scanf("%d",&array[i]);
	}
	
	int *arrayp = array;
	printf("\n \n");
	
	for(j=0;j<size;j++){
		printf("%d.element is:%d ",j+1,*(arrayp+j));
		printf("\n");
	}
	
	return 0;
}
