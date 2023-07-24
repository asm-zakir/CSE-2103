#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    A=A*B;              //10*5=50
    B=A/B;              //50/5=10
    A=A/B;              //50/10=5
    printf("%d\n%d\n",A,B);
    return 0;
}
