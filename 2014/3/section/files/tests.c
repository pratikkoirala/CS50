#include <stdio.h>
#include "helpers.c"

int main(void)
{
    int array[] = {10, 9, 8, 7};

    int* new_array = sort(array, 4);

    for(int i = 0; i < 4; i++)
        printf("%i ", *(new_array + i));
}
