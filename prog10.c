/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[4]={1,4,5,3},b[4],i;
    for(i=0;i<=4;i++)
    b[i] =a[i];
    for(i=0;i<=4;i++)
    printf("%d",b[i]);


}