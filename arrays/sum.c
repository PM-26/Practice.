#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elemets in array : \n");
    scanf("%d",&n);

    int arr[n];
    for (int i=0; i<n; i=i+1){
        printf("Element %d -",i);
        scanf("%d",&arr[i]);
    }

    int sum=0;
    
    for (int i; i<n; i=i+1){
        sum=sum + arr[i];
    } 

    printf("Sum = %d \n",sum);

    return 0;

}