// num input to user that is divide by 11 and 5
#include<stdio.h>
int main(){
	
	int a;
	printf("enter the value of a = ");
	scanf("%d",&a);
	
	
	if(a%5==0 && a%11==0){
		printf("dividible by 5 and 11");
	}
	else{
		printf("not divisible by 5 and 11");
	}
	return 0;
	
}
