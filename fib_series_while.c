#include<stdio.h>

int main()
{
    int x, sum=0, a;
    printf("Enter the integer number:");
    scanf("%d", &x);
    printf("The sum of %d digits is:", x);
    while(x=0)
    {
        a=x%10;
        sum=sum+a;
        x=x/10;
    }
    printf("%d", sum);
    return 0;
}
