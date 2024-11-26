#include<stdio.h>
#include<math.h>
int main()
{
    int n,remainder,j=0;
    float sum=0;


    printf("enter the n\n");
    scanf("%d",&n);

    while(n!=0)
    {
       remainder= n%10;
       sum =sum + remainder*pow(2,j);
       j++;
       n=n/10;
    }

    printf("%f",sum);
    return 0;
}
