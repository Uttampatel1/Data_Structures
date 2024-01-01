#include <stdio.h>

int main()
{
	int arr[] = { 40,20,10,4,5,6,8,9,50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
    for (int i=0;i<n;i++){
        if(arr[i]==x){
            printf("Element is present at index %d",i);
        }
    }
	return 0;
}
