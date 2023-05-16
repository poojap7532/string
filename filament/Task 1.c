#include <stdio.h>
#include<string.h>
//1. Write C program to count frequency of each character in a string.
int main(){
    char a[10];  
    int  i,j,k,count=0,n;
 
    printf("Enter  the string : ");
    gets(a);
     
    for(j=0;a[j];j++);
	 n=j; 
    
	printf(" frequency count character in string:\n");
 
    for(i=0;i<n;i++){
     	count=1;
    	if(a[i]){
		
 		  for(j=i+1;j<n;j++){   
	    	
	        if(a[i]==a[j]){
                 count++;
                 a[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",a[i],count);
       }
 	} 
    return 0;

}
