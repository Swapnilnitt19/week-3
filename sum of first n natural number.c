#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	
	printf("enter the n\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	
	printf("the sum is %d\n",sum);
	return 0;
}
