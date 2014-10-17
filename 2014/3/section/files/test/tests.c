#include <stdio.h>
#include "helpers.c"
#include <cs50.h>

int main(void)
{
    int* array = malloc(sizeof(int) * 100);

    for(int i = 0; i < 100; i++)
    {
        *(array + i) = GetInt();
    }

//     array[] = {1, 2, 3, 12, 11, 10, 9, 8, 7, 6, 5, 4, 55, 99, 41, 3, 2, 1, 0, -1, -2};

    int* new_array = sort(array, 100);

    for(int i = 0; i < 100; i++)
        printf("%i ", *(new_array + i));

    free(new_array);

    printf("\n");
}
