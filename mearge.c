#include <stdio.h>

void printArr(int arr[],int size){
    printf("printing the array: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void mearge(int arr[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int temp[high];

    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            arr[k] = arr[i];
            i++;
            k++;
        }
        if(arr[j] <= arr[i]){
            arr[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        arr[k] = arr[i];
            i++;
            k++;
    }

    while (j <= high)
    {
         arr[k] = arr[j];
            j++;
            k++;
    }
    
    printArr(arr,high);
}

void meargeSort(int arr[],int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        meargeSort(arr,low,mid);
        meargeSort(arr,mid+1,high);
        mearge(arr,low,mid,high);
    }
}

int main(){
    int arr[]= {4,1,5,8,3,6,10,0};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]);
    printArr(arr,high);
    meargeSort(arr,low,high);
    printArr(arr,high);
    return 0;
}