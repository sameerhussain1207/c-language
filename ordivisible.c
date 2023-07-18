// user input a number check it divisible by 7 or 3
#include<stdio.h>
int main(){
	
	int a;
	printf("enter the value of a = ");
	scanf("%d",&a);
	
	
	if(a%7==0 || a%3==0){
		printf("dividible ");
	}
	else{
		printf("not divisible");
	}
	return 0;
	
}
