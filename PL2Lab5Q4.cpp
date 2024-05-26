#include<stdio.h>
#include<stdlib.h>

int main(){
	int count,i,sum = 0;
	printf("Input the number of elements to store in the array (max 10): ");  
	scanf("%d",&count);
	int* ptr;
	ptr = (int*)malloc(count*sizeof(int)); 
	
	if(ptr == NULL) {
		printf("Memory allocation failed.\n");
		return -1; 
	}
	
	for(i=0;i<count;i++){
		printf("%d. element: ",i+1); 
		scanf("%d",&ptr[i]); 
		sum += ptr[i];
	}
	printf("Output is: %d\n",sum); 
	
	free(ptr); 
	
	return 0;
}

