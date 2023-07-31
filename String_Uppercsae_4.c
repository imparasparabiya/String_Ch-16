#include<stdio.h>

main(){
	
	char ch[100];
	int i;
	
	printf("Enter lowercase Latter = ");
	gets(ch);
	
	printf("Your Latter Convert Uppercase = ");
	
	for(i=0;ch[i]!=NULL;i++){
		
		printf("%c",ch[i]-32);
	}
}
