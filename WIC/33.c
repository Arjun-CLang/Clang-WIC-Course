/* Write a program in ‘C’ accept a no & print its Factorial using do loop. e.g.4! = 1*2*3*4 = 24*/
#include <stdio.h>
int main()
{
  int i=1,fact=1,n; 
  printf("\n Enter the any number");
  scanf("%d",&n);
  do
  {
    fact=fact*i;    
    i++;
  } while (i<=n);
    printf("\n Factorial is %d=%d",n,fact);
    return 0;
}