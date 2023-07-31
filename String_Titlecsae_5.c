#include<stdio.h>

main(){
	
	char ch[50];
	int i;
	printf("Enter Latter = ");
	gets(ch);
	
	printf("*******Title case Latter*********\n ");
	
	for(i=0;ch[i]!=NULL;i++)
	{
		if(ch[i-1]==' '||i==0){
			
		
		if(ch[i]>=97 && ch[i]<=122){
			
			ch[i] = ch[i]-32;
		}
	}
	
		else{
			if(ch[i]>=65 && ch[i]<=90)
			{
				ch[i] = ch[i]+32;
			}
			
		}
	}
	puts(ch);
}
