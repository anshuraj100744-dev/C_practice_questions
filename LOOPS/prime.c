// code to check whether the given number is prime or not:
#include<stdio.h>
int main()
{
int n , count=0;
printf("enter a number:");
scanf("%d",&n);
for(int i=1;i<n;i++)
{if(n%i==0)
    {count++;}}
    if(count>1)
    {printf("not a prime number");}
    else if(n<=1){printf("not a prime");}

    else(printf("given no is a prime"));




    return 0;
}//this code doesn't work for negative numbers because of the else if statement line: