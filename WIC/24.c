#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter the first number:");
    scanf("%d",&a);
    printf("\n Enter the second number:");
    scanf("%d",&a);
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Division");
    printf("\n  Enter your equation code from the above choices?");
    scanf("%d",&a);
    switch(a)
    {
      case 1:
      printf("\n your addition is %d");
      break;
      case 2:
      printf("\n your subtraction is %d");
      break;
      case 3:
      printf("\n your multiplication is %d");
       break;
       case 4:
      printf("\n your division is %d");
      break;
      default:
      printf("\n wrong choice");
      break;
    }
    return 0;
}

