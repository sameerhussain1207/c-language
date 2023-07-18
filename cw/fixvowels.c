#include<stdio.h>
int main(){
	char ch ;
	
	printf("enter a character = ");
	scanf("%c",&ch);
	
	if(ch =='a' ||ch =='f' ||ch =='g' ||ch =='h' ){
		printf("it is matched");
	}
	else{
		printf("it is not match");
	}
	return 0;
}
