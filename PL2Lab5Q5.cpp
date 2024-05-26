#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
	int i,cnt = 0;
	char* p =(char*)malloc(30*sizeof(char));
	char str[30];
	
	printf("Don't put space to the start.");
	printf("Enter a word. \n"); gets(str);
	strcpy(p,str);
	
	for(i=0;p[i]!='\0';i++){
		cnt++;
	}
	
	printf("The length of the string is:%d ",cnt);
	
	free(p);
	getch();
	return 0;
}
