#include<stdio.h>
void main()
{
    //FINDING THE FIBONACCI SERIES
int n1=0, n2=1, n3, i, number;
printf("Enter the number of number:");
scanf("%d", &number);
printf("%d,%d", n1, n2);
for(i=2;i<=number;i++)
{
n3=n1+n2;
printf(",%d", n3);
n1=n2;
n2=n3;
}
}
