//Write a program that takes the lengths of three sides of a triangle and determines if the triangle is valid based on the conditions of a valid triangle using conditional statements.
#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter the lengths of a triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {

        printf("valid triangle");
    }


    else{
          printf("Not valid");
        }

    return 0;
}

