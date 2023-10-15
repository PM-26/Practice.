#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number: \n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i = i + 1)
    {
        for (int j = i; j <= number; j = j = j + 1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}