#include <stdio.h>
#define SIZE 5
int arr[SIZE];

int main(){
    int i,search ;
    for (i=0;i<SIZE;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&search);

    for (int i=0;i<SIZE;i++){
        if (arr[i]==search){
            printf("Element found at %d",i+1);
            break;
        }
    }

}