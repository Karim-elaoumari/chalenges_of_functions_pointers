#include <stdio.h>
int sum();
int main(){
	int a1,b1;
	printf("enter the fist number:");
	scanf("%d",&a1);
	printf("enter the secend number:");
	scanf("%d",&b1);
	printf("the sum is :%d",sum(a1,b1));
	
	
	
	
}
int sum(int a,int b){
	int result ;
	result=a+b;
	return result;
	
}
