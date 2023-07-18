#include<stdio.h>
int main()
{
    int A,years,B,weeks,days;
    printf("Please input number of days:");
    scanf("%d",&A);
    years=A/365;
    B=A%365;
    weeks=B/7;
    days=B%7;
    printf("%d years,%dweeks and %ddays\n",years,weeks,days);

    return 0;
}
