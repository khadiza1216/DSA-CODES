#include<stdio.h>
void quickSort(int a[],int low,int high){
if(low<high){
int pivot=a[high];
int i=low-1,temp;
for(int j=low;j<high-1;j++){
if(a[j]<pivot){
++i;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[i+1];
a[i+1]=a[high];
a[high]=temp;
quickSort(a,low,i);
quickSort(a,i+2,high);
}
}
int main(){
int i,j,low,high,temp,pivot,n;
printf("enter array size:");
scanf("%d",&n);
int a[n];
printf("enter value in array:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
quickSort(a,0,n-1);
printf("sorted result:\n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}
