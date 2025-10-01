#include <stdio.h>
int main()
{
  int i,fact=1,n; 
  printf("\n Enter the any number");
  scanf("%d",&n);
  for ( i = 1; i <= n; i++)
  {
    fact=fact*i;
  }
  
    printf("\n Factorial is %d=%d",n,fact);
    return 0;
}