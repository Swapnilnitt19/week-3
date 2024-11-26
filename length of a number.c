#include<stdio.h>
int main()
{
	int i=1,n;
	
	printf("enter the n\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n= n/10;
		i++;
	}
	printf("%d",i-1);
	return 0; 
	
	}
 
