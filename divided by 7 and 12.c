#include<stdio.h>
int main()
{
    int A;
    printf("Enter A Number:");
    scanf("%d",&A);
    if((A%7==0)&&(A%12==0))
    {
        printf("The Number IS Divisible by 7 and 12");
    }
    else
    {
        printf("The Number IS Not Divisible by 7 and 12");
    }

  return 0;
}
