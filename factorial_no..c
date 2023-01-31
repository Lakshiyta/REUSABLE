#include<stdio.h>

int main()
{
    //FINDING FACTORIAL OF A NO. USING FOR LOOP
    int i, fact=1, number;
    printf("Enter a number:");
    scanf("%d", &number);
    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is:%d", number,fact);
    return 0;
}
