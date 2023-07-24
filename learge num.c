#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter three numbers:");
    scanf("%d%d%d",&A,&B,&C);
    if((A>B>C)||(A>C>B))
    {
        printf("The large number is: %d\n",A);
    }
    else if((B>A>C)||(B>C>A))
    {
        printf("The large number is: %d\n",B);
    }
    else
    {
        printf("The large number is: %d\n",C);
    }
    return 0;
}
