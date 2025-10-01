#include<stdio.h>
void main()
{
    float bs,gs,da,hra;
    printf("\n enter the basic salary");
    scanf("%f",& bs);
    if(bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/1000;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    printf("\n gross salary=rs.%f",gs);
}