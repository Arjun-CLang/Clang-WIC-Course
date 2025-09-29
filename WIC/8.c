#include<stdio.h>
int main()
{
    int en,bs,da,gs,it,pt,td,ns,hra;
    printf("\n enter the employee number");
    scanf("%d",&en);
    printf("\n enter the basic salary");
    scanf("%d",&bs);
    da=bs*16.8/100;
    printf("\n Dearness Allowance is = %d",da);
    hra=500;
    printf("\n house rent is=%d",hra);
    gs=bs+da+hra;
    printf("\n gross salary is=%d",gs);
    it=gs*7.5/100;
    printf("\n income tax is=%d",it);
    pt=50;
    printf("\n professional tax is=%d",pt);
    td=it+pt;
    printf("\n total deducation is=%d",td);
    ns=gs-td;
    printf("\n net salary is=%d",ns);
    return 0;
}
