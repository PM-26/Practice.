#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    
    for (int i=0; i<n; i=i+1){
        printf("Element %d- ",i);
        scanf("%d",&arr[i]);
    }

    printf("The values stored in array in reverse : \n");
    for (int i=n-1; i>=0; i=i-1){
        printf("%d \n",arr[i]);
    }

    return 0;
}