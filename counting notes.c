 #include<stdio.h>
int main()
{
    int MONEY,A,B,C,D,E,F,G,H,I,J;
    printf("Input the amount of Money: ");
    scanf("%d",&MONEY);
    A=MONEY/1000;                    //1000tk note
    B=(MONEY%1000)/500;             //500tk note
    C=(MONEY%1000)%500;
    D=C/100;                        //100tk note
    E=(C%100)/50;                   //50tk note
    C=(C%100)%50;
    F=C/20;                         //20tk notes
    G=(C%20)/10;                    //10tk notes
    C=(C%20)%10;
    H=C/5;                          //5tk notes
    I=(C%5)/2;                     //2tk notes
    J=(C%5)%2;                      //1tk notes

    printf("Total number of notes:\n 1000: %d, 500: %d,100: %d, 50: %d,20: %d, 10: %d,5: %d, 2: %d,1: %d\n",A,B,D,E,F,G,H,I,J);


    return 0;
}
