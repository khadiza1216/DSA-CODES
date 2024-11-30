#include<stdio.h>
int main()
{
int temp,n,i,j,ar[100];
printf("how many numbers:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(ar[i]>ar[j])
{
temp=ar[i];
ar[i]=ar[j];
ar[j]=temp;
}
}
}
printf("sorted array elements:");
for(i=0;i<n;i++)
{
printf("%d ",ar[i]);
}


return 0;
}
