 //Write a program to calculate the sum of all even numbers and sum of all odd
#include<stdio.h>
int main()
{
    int a[10],i,sum=0,sumo;
    printf("Enter the number");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    if(a[i]%2==0)
     { sum=sum+a[i];}
    
    else {
         sumo=sumo+a[i];}
    printf("%d is the sum of even numer",sum);
    printf("%d is the sum of odd number ",sumo)  ;
    
    
}