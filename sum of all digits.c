#include<stdio.h>
int main(){
	int n;
	printf(" enter the number : ");
	scanf("%d",&n);
	int sumcount =0; int last_digit =0;
	while(n!=0){
		last_digit =n%10;
		sumcount = sumcount+ last_digit;
		n=n/10;
		
	}
	printf("the sum is %d",sumcount);
	return 0;}
	
