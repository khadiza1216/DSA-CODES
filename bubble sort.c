#include<stdio.h>
int main()
{
    int j,temp,i,n;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:");
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    for(i=n;i>0;i--){
        for(j=0;j<i-1;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array:");
    for(i=0;i<n;++i){
        printf("%d ",a[i]);
    }
    return 0;
}
