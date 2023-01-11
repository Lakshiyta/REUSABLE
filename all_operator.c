#include<stdio.h>

int main()
{
    int a, b, sum, subtract, multiply, divide, modulus;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);

    sum=a+b;
    printf("The addition of two number:%d\n", sum);

    subtract=a-b;
    printf("The subtraction of two numbers:%d\n", subtract);

    multiply=a*b;
    printf("The multiplication of two numbers:%d\n", multiply);

    divide=a/b;
    printf("The divide of two numbers:%d\n", divide);

    modulus=a%b;
    printf("The modulus of two numbers:%d\n", modulus);

    return 0;
}
