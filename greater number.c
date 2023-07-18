// 3 numbers which is greater then 

#include<stdio.h>
int main(){
	
	int a;
	int b;
	int c;
	printf("enter the value of a = ");
	scanf("%d",&a);
	
	printf("enter the value of b = ");
	scanf("%d",&b);
	
	printf("enter the value of c = ");
	scanf("%d",&c);
	
	
	if(a>b && a>c){
		printf("a is greater then b and c ");
	}
	else{
		printf("c is greater then a and b");
	}
	return 0;
	
}
