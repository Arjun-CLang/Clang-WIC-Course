#include<stdio.h>
int main()
{
    int sale[6],total=0,i;
    float avg;
    for(i=0;i<6;i++)
    {
        printf("\n Enter the sale figure=");
        scanf("%d",&sale[i]);
        total=total+sale[i];
    }
    avg=total/6.0;
    printf("\n Total sale=%d",total);
    printf("\n Average=%f",avg);
}
