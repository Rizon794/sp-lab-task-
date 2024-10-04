//Write a program to count the number of digits in an integer using a while loop
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the digit:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits:%d",count);
    return 0;
}
