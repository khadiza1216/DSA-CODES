#include<stdio.h>
int main()
{
int item,lr=0,up=4,mid,f=0;
int a[5]={34,35,78,15,39};
scanf("%d",&item);
while (lr<up)
{

    mid= (lr+up)/2;
    if (a[mid]==item)
    {
        f=1;
        break;
    }
    if(a[mid]<item)
    {

        lr=mid+1;
    }
    else
    {
        up=mid-1;
    }

}
if (f==1)
{
    printf("item found");
}
else
{
    printf ("item not found");
}
}
