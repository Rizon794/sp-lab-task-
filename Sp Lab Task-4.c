//Write a program that takes a score as input and assigns a grade (A, B, C, D, F) using the switch-case statement
#include<stdio.h>
int main()
{
    int score;
    scanf("%d",&source);
    switch(marks/10)
    {
      case 10:
      case 9:
      case 8:
      printf("A+\n");
      break;
      case 7:
      printf("A\n");
      break;
      case 6:
      printf("A-\n");
      break;
      case 5:
      printf("B\n");
      case 4:
      printf("B-\n");
      break;
      case 3:
      printf("C\n");
      break;
      default:
      printf("Fail!\n");
      }
      return 0;
}


