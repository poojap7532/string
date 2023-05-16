#include<stdio.h>
//2. Write C program to check whether a string is palindrome or not.
int main(){
	char a[20];
	char temp[20];
	
	while(1){
	
	printf("Enter Text : ");
	gets(a);
	
	strcpy(temp,a);
	
	strrev(temp);
	
	int z =strcmp(a,temp);
	if(z == 0){
		printf("palindrome\n\n");
	}
	else{
		printf(" Not palindrome\n\n");
	}
}
return 0;
}
