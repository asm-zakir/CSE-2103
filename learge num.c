#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter three numbers:");
    scanf("%d%d%d",&A,&B,&C);
    if((A>=B)&&(A>=C))
    {
        printf("The large number is: %d\n",A);
    }
    else if((B>A)&&(B>=C))
    {
        printf("The large number is: %d\n",B);
    }
    else
    {
        printf("The large number is: %d\n",C);
    }
    return 0;
}
