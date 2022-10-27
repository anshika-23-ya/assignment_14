/*Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>
int main()
{
    int a[10]={12,7,5,9,4,3,5,9,2,8},i,j;
    int temp;
    
    for(i=0;i<=9;i++)
    for(j=i+1;j<=10;j++)
    if(a[i]>a[j])
     {
        temp=a[i];
        a[i] =a[j];
        a[j] = temp;
     }
     for(i=0;i<=9;i++)
     printf("%d ",a[1]);
}