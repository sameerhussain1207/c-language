// 5 7 11 13 number put so 
#include<stdio.h>
int main(){
	
	int num;
	printf("enter the number = ");
	scanf("%d",&num);
	if(num ==5 || num==7 || num==11 || num==13){
		printf("valid");
	}
	else{
		printf("not valid");
	}
	return 0;
	
}
