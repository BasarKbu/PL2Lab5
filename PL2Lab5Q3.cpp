#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void swap(int* x,int length){
	int k,temp;
	
	for(k=0;k<length-1-k;k++){
		int temp = x[k];
		x[k] = x[length-1-k];
		x[length-1-k] = temp;
	}
	
}

int  main(){
	int size,i,j;
	int* p;
	printf("Enter the size: \n"); scanf("%d",&size);
	p =(int*)malloc(size*sizeof(int));
	
	for(i=0;i<size;i++){
		printf("%d.element: ",i+1); scanf("%d",(p+i));
	}
	
	swap(p,size);
	printf( "\n\n");
	
	for(j=0;j<size;j++){
		printf("%d ",p[j]);
	}
	
	getch();
	return 0;
}
