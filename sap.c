#include <stdio.h>
int main()
{
    int count=0;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter value for %d->", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 0)
        {
            count = count + 1;
        }
        for (int j = 0; j < 3 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    if (count == 1)
    {
        arr[0] = arr[1];
        arr[1] = 0;
    }
    else if (count == 2)
    {
        arr[0] = arr[2];
        arr[2] = 0;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}