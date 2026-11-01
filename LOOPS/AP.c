// This code takes input and prints an AP
#include<stdio.h>
int main()
{
int m,n,f;
printf("enter f(first term):");
scanf("%d",&f);
printf("enter n(till where):");
scanf("%d",&n);
printf("enter m(common difference):");
scanf("%d",&m);    
for(int i=f;i<=n;i=i+m)
printf("%d_",i);




    return 0;
}