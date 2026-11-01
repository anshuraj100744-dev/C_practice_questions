//Print the multiplication of all the elements in an array:
#include<stdio.h>
int main ()
{
int i,n,multiplication=1;
printf("enter the number of elements:");
scanf("%d",&n);
int array[n];
for( i=0;i<n;i++)
{printf("enter element no %d=",i+1);
    scanf("%d",&array[i]);
    printf("%d ",array[i]);
}

        return 0;}

