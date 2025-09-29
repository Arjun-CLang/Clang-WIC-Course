#include<stdio.h>
void main()
{
    int choice;
    printf("\n 1.Red");
    printf("\n 2.Blue");
    printf("\n 3.Green");
    printf("\n  Enter your favorite color code from the above choices?");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      printf("\n your choice is Red");
      break;
      case 2:
      printf("\n your choice is Blue");
      break;
      case 3:
      printf("\n your choice is Green");
      break;
      default:
      printf("\n wrong choice!!!");
      break;
    }
    return 0;
}
