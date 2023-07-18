// it is for voter id age is greater then 18 soo valid otherwise not valid in it 

#include<stdio.h>
int main(){
	
	int age;
	printf("enter your age = ");
	scanf("%d",&age);
	if(age >= 18){
		printf("you are valid for vote ");
	}
	else{
		printf("you are below the age");
	}
	return 0;
	
}
