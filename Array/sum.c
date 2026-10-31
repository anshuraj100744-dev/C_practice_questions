//Print the sum of all the elements in the given array
#include<stdio.h>
int main()
{int arr[7],a,sum=0;
// int arr[7]={1,2,9,4,25,6,7};
for(int i=0;i<7;i++)
{ printf("enter the elements %d\n:",i+1);
    scanf("%d",&arr[i]);
a=arr[i];
sum+=a;


}
printf("SUM =%d ",sum );

    return 0;
}