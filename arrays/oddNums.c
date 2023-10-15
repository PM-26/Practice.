#include <stdio.h>

int oddnum(int arr[],int n){
    int counter = 0;
    for (int i=0; i<n; i=i+1){
        if (arr[i] % 2 != 0){
            counter++;
            }
            }
    return counter;
}

int main()
{
    int arr[] = {1,2,3};
    printf("%d \n", oddnum(arr,3));

    return 0;
}   