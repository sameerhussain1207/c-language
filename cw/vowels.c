#include<stdio.h>
int main(){
	char ch ;
	
	printf("enter a character = ");
	scanf("%c",&ch);
	
	if(ch =='a' ||ch =='e' ||ch =='i' ||ch =='o' ||ch =='u' ){
		printf("it is vowels");
	}
	else{
		printf("it is consonent");
	}
	return 0;
}
