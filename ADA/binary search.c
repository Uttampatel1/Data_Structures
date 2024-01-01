#include <stdio.h>
#define SIZE 5
int arr[SIZE];

int main(){
    int i,search,found=0,min=0,max = SIZE-1,mid ;
    printf("Enter the element in ASC order:");
    for (i=0;i<SIZE;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&search);

    while (min<=max){
        mid = (min+max) /2;
        if (arr[mid] == search){
            printf("Element found at %d",mid+1);
            found = 1;
            break;
        }
        else if (arr[mid] > search){
            max = mid -1;
        }
        else{
            min = mid +1;
        }
    }
    return 0;
}