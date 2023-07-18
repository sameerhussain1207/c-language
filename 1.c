#include<stdio.h>
int main(){
	int a = 56;
	
	a=10;
     int b=20;
     int c;
	printf("the value of a is = %d\n",a);
	printf("the value of a is = %d\n",b);
	
	a=a+b; // 30
	b=a-b; //10
	a=a-b; //10	
	printf("the swap value of a  is : %d\n",a);
	printf("the swap value of a  is : %d\n",b);
	
	return 0;
	
}
