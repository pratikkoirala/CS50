#include <stdio.h>
#include "helpers.c"

int main(void)
{
    int array[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 55, 99, 41, 3, 2, 1, 0, -1, -2};

    int* new_array = sort(array, 18);

    for(int i = 0; i < 18; i++)
        printf("%i ", *(new_array + i));
}
