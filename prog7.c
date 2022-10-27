/*Write a program to find second largest in an array.Take array values from the user.*/
#include<stdio.h>
int main()
{
    int a[4]={1,8,6,2};
    int i,j,temp;
    for(i=0;i<=3;i++)
    for(j=i+1;j<=4;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]= a[j];
            a[j] =temp;

        }

    }
    for(i=0;i<=3;i++)
    printf("%d ",a[2]);
}
