#include<stdio.h>

int main()
{
    printf("\n\n\t\tHI LAKSH!!!\n\n\n");
    int year;
    printf("Enter a year to check whether it is a leap year or not:");
    scanf("%d", &year);
    if(year%400==0)
        printf("%d is a leap year", year);
    else if(year%100==0)
        printf("%d is not a leap year", year);
    else if(year%4==0)
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);

        printf("\n\n\t\tHAPPY NEW YEAR!!!@_@\n\n\n");
    return 0;
}
