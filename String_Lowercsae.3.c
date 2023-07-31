#include<stdio.h>

main(){
	
	char ch[100];
	int i;
	
	printf("Enter Uppercase Latter = ");
	gets(ch);
	
	printf("Your Latter Convert Lowercase = ");
	
	for(i=0;ch[i]!=NULL;i++){
		
		printf("%c",ch[i]+32);
	}
}
