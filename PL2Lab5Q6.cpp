#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
	char string[100];
	int length,i;
	printf("Enter the length of string. \n"); scanf("%d",&length);
	char* str =(char*)malloc(length*sizeof(char));
	printf("Enter a string: "); scanf("%s",string);
	strcpy(str,string);
	char temp;
	
	for(i=0;str[i]!='\0';i++){
	temp = str[i];
	str[i] = str[length-1-i];
	str[length-1-i] = temp;
	}
	
	printf("The reversed version of the string is:%s",str);
	
	free(str);
	getch();
	return 0;
}
