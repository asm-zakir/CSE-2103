#include<stdio.h>
int main()
{
    char A;
    printf("Enter a character:");
    scanf("%c",&A);
    if(A>='a'&&A<='z')
    {
        printf("The character is lowercase");
    }
    else if(A>='A'&&A<='Z')
    {
        printf("The character is uppercase");
    }

    return 0;
}
