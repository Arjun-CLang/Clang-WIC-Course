#include<stdio.h>
void main()
{
    int la,roi,ia,ta;
    //la=loan amount,roi=rate of intreast,ia=intrest amount,ta=total amount
    printf("\n the loan amount is:");
    scanf("%d",&la);
    printf("\n the rate of interest  is :");
    scanf("%d",&roi);
    ia=la*roi/100;
    printf("\n the interest amount is =%d",ia);
    ta=la+ia;
    printf("\n the tatal amount is =%d",ta);

    return 0;
}
