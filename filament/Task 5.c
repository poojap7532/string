#include<stdio.h>
#include<string.h>
//5. Write C program convert Given String into Titlecase. 

int main(){
	char a[10];
	int i;
	
	while(1){
	
	printf("Enter Text : ");
	gets(a);
	
    for(i=0; i<strlen(a); i++){
		
        if(a[0]>='a' && a[0]<='z'){
		   a[0] -= 32;
	    }
	    else if(a[0]>='A' && a[0]<='Z'){
		    a[0] += 32;
	    }
	    
    }
	printf("%s\n\n",a);
}

	return 0;
}

