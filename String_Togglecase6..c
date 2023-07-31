#include<stdio.h>
#include<string.h>

main(){

	char name[100];
	int i;

	printf("Enter name = ");
	gets(name);
	 

	 for(i=0;name[i] != '\0' ;i++)
	 	{
	 		if(name[i] >= 'A' && name[i] <= 'Z' ){
	 			
	 			name[i] = name[i] + 32;
			 }
			 
			 else if(name[i] >= 'a' && name[i] <= 'z'){
			 	
			 	  name[i] = name[i] - 32;
			 }
			 
		 }			 
	
		 
		 printf("Name is Togglecase : %s",name);	 
		 	 
	 
	
}
