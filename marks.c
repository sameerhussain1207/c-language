// 5 subject name user input
#include<stdio.h>
int main(){
	
	int math;
	int english;
	int hindi;
	int computer;
	int history;
	int num =40;
	
	printf("enter the marks  = ");
/*	printf("enter the marks of english = ");
	printf("enter the marks of hindi = ");
	printf("enter the marks of computer = ");
	printf("enter the marks of history = ");*/
	

	scanf("%d%d%d%d%d",&math,&english,&hindi,&computer,&history);
	
	if(math>num  && english>num  && hindi>num && computer>num && history>num  ){
		printf("you are passed");
	}
	else{
		printf("you are failed");
	}
	return 0;
	
} 
