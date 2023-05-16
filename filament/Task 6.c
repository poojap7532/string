#include<stdio.h>
#include<string.h>

int main(){
	char a[20];
	int i;
	
	printf("Enter value : ");
	gets(a);
	
	for(i=0; i<strlen(a); i++){
	if(a[i]>='A' && a[i]<='Z'){
		
		a[i] += 32;
		
		printf("%c",a[i]);
	
	}
	else if(a[i]>='a' && a[i]<='z'){
		
		a[i] -= 32;
		printf("%c",a[i]);
	}
}	
	return 0;
}
