#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in array : \n");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i=i+1){
        printf("Element %d -",i);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i=0; i<n; i=i+1){
        if (arr[i]>max){
            max = arr[i];
        }
        else if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d - Max Element \n",max);
    printf("%d - Min Element \n",min);

    return 0;
}