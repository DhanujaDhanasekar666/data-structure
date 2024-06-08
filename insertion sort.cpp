#include<stdio.h>
#include<math.h>

void InsertionSort(int arr[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void PrintArray(int arr[],int n){
    int i;
    printf("Given Array Sorted using Insertion sort:\n");
    for(i=0;i<n;i++){
        
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){

    int arr[]={23,89,75,90,11,21};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Given array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    InsertionSort(arr,n);
  
    PrintArray(arr,n);
    
    return 0;
}






