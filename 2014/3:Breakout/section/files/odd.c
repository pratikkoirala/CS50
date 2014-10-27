#include <stdio.h>
#include "helpers.c"
#include <cs50.h>

int main(void)
{
    int* array = malloc(sizeof(int) * 10);

    int array1[] = {1, 2, 3, 12, 11, 10, 2, 4, 5, 1};

    for(int i = 0; i < 10; i++)
    {
        *(array + i) = array1[i];
    }

    int* new_array = sort(array, 10);

    for(int i = 0; i < 10; i++)
        printf("%i ", *(new_array + i));

    free(new_array);

    printf("\n");
}
