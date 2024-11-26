#include<stdio.h>
int main()
{
	int i,factorial=1,n;
	
	printf("enter the n\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		factorial= factorial*i;
	}
	printf("the start is %d",factorial);
	
	return 0;
	
	
}
