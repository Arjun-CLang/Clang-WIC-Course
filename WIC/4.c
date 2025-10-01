#include<stdio.h>
void main()
{
    int la,roi,ia,ta;
    //la-loan amount,roi-rate of intreast,ta-total amount,ia-intreast amount
    printf("\n enter the loan amount ");
    scanf("%d",&la);
    printf("\n enter the rate of interest ");
    scanf("%d",&roi);
    ia=la*roi/100;
    printf("\n interest amount is %d",ia);
    ta=la+ia;
    printf("\n total amount is %d",ta);
}
