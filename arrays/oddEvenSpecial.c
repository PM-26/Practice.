#include <stdio.h>

int main(void) {
    // Declare and initialize variables
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int main_array[size], odd_array[size], even_array[size];
    int odd_count = 0, even_count = 0;

    // Prompt the user to enter values for the array
    printf("Enter %d values for the array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &main_array[i]);
    }

    // Create two new arrays containing the odd and even numbers from the original array
    for (i = 0; i < size; i++) {
        if (main_array[i] % 2 == 0) {
            even_array[even_count++] = main_array[i];
        } else {
            odd_array[odd_count++] = main_array[i];
        }
    }

    // Print the two new arrays
    printf("Odd numbers: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\nEven numbers: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    return 0;
}
