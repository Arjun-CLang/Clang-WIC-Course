#include<stdio.h>
void main()
{
  int no;
  printf("\n Enter a number :");
  scanf("%d",&no);
  if(no>100)
  printf("\n %d is greater than 100",no);
  if(no<100)
  printf("\n %d is less than 100", no);
  if(no==100)
  printf("\n %d is equal to 100",no);
  return 0;
}
