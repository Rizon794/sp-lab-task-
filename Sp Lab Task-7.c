//Write a program to create a simple calculator using the switch-case statement. The program should perform addition, subtraction, multiplication, and division based on user input
#include<stdio.h>
int main()
{
    char ch;
    int a=10,b=20;
    scanf("%c",&ch);
    switch(ch)
    {
      case '+':
      printf("Addition:%d", a + b);
      break;
      case '-':
      printf("Substitution:%d", a - b);
      break;
      case '*':
      printf(" Multiplication:%d", a * b);
      break;
      case '/':
      printf("Division:%.2f", (float)a / b);
      break;
      default:
      printf("Not valid ");
      }
      return 0;
}
