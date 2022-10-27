/*Write a program to sort elements of an array of size 10. Take array values from the
user.*/
#include<stdio.h>
int main()
{
    int a[4]={2,5,3,1},temp;
    int i,j;

    for(i=0;i<=3;i++)
    for(j=i+1;j<=4;j++)
    {
        if(a[i]>a[j])
        {
            temp =a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(i=0;i<=3;i++)
    printf("%d",a[i]);
    return 0;
}