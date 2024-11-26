#include<stdio.h>
int main()
{
    int n,i,remainder,r=0,a,b;

    printf("enter the n\n");
    scanf("%d",&n);
    a=n%10;
    while(n!=0)
    {
        remainder=n%10;
        r=r*10 + remainder;
        n=n/10;
    }

    b=r%10;
    printf("%d",a+b);

    return 0;
}
