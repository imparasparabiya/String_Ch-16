#include<stdio.h>


main()
{
	char ch[] = "PARAS";
	int i;
	
	printf("Name Uppercase = ");
	puts(ch);
	
	printf("Your are name Lowercase :- ");	
	
	for(i=0;i<=4;i++){
		printf("%c",ch[i]+32);
	}
	
}
