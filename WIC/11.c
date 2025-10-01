#include<stdio.h>
int main ()
{
int empno,da,bs,hra,gs,it,pt,td,ns;
printf("\n enter the employee no=");
scanf("%d",&empno);
printf("\n enter the basic salary=");
scanf("%d",&bs);
da=bs*16.8/100;
printf("\n enter the Da is=%d",da);
hra=500;
printf("\n house rent=%d",hra);
gs=bs+da+hra;
printf("\n enter the gross salary is=%d",gs);
it=gs*7.5/100;
printf("\n enter the  income tax is=%d",it);
pt=50;
printf("\n enter the professional tax=%d",pt);
td=it+pt;
printf("\n total deduction is=%d",td);
ns=gs-td;
printf("\n enter net salary is=%d",ns);
}


