#include<stdio.h>

void swap(int arr [], int i,int j){
int temp= arr[i];
arr[i]=arr[j];
arr[j]=temp;
}

void print(int arr[], int n){
for( int i= 0; i<n;i++){
printf("%d ",arr[i]);
}
}

void bubblesort (int arr[], int n){
for(int k=0; k< n-1; k++){
        for(int i = 0;i< n-1-k;i++){
    if(arr[i]>arr[i+1]){
        swap(arr, i, i+1);
    }
}
}}

int main(){
int arr[]= {19,32,67,22,29};
int n=sizeof(arr)/ sizeof(arr[0]);
bubblesort (arr,n);
print(arr,n);
return 0;
}
