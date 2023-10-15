#include <stdio.h>

int main()
{
    int a;
    printf("\t P O I N T E R S\n");
    printf("Enter any number for variable a:\n");
    scanf("%d", &a);
    int *ptr = &a;
    printf("Address of variable a = %u \n", &a);
    printf("Value at address of variable a = %d \n", *ptr);
    return 0;
}