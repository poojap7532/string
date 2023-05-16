#include<stdio.h>
//4. Write C program given character in Uppercase.//

int main(){
	char A;

	printf("Enter value : ");
	scanf("%c",&A);
    
	if(A>='a' && A<='z'){
		A-=32;
		printf("%c",A);
		
	}	
	else{
		printf("%c",A);
	}
	return 0;
}
