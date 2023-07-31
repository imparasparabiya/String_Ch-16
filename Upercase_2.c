#include<stdio.h>

main(){
	
	char ch[] = "paras";
	int i;
	printf("Enter Name Lowercase = ");
	puts(ch);
	
	
	printf("NAME UPERCASE = ");
	for(i=0;i<=4;i++){
		printf("%c",ch[i]-32);
	}
}

