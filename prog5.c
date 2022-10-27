//Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
{
    int a[10];
    int i ,min =99
    ;
    printf("Enter the number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    if(a[i]<min)
     min=a[i];
   printf("Minimum value is %d",min);
}