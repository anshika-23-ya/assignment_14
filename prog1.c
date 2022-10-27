/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/
#include<stdio.h>
int main()
{
    int  a[10],i,sum = 0;
    
    printf("enter the number");
    for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
     for(i=0;i<=9;i++)
     sum= sum+a[i];
     printf("The sum of  10 number is %d",sum);
}