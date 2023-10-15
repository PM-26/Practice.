#include <stdio.h>

void reverse(){
    int n;
    printf("Enter elements in array: ");
    scanf("%d",&n);

    int arr[n];

    //entry
    for(int i=0; i<n; i=i+1){
        printf("Element %d",i);
        scanf("%d",&arr[i]);
    }

    //reverse
    for(int i=0; i<n/2; i=i+1){
        int firstValue=arr[i];
        int secondValue=arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
    //printing
    for (int i=0; i<n; i=i+1){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}

int main(){
    reverse();
    return 0;
}