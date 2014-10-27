#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <ctype.h>
#include <stdio.h>
#include "helpers.c"
#include <cs50.h>

#define ALOT 10000
#define LIMIT 65536

int main(void)
{
    int array[ALOT];

    for(int k = 0; k < ALOT; k++)
    {
        array[k] = GetInt();
    }

    int* ptr = sort(array, ALOT);


    // this is printing out where the repeats would be!
    for(int i = 0; i < ALOT; i++)
    {
        printf("%i\n", *(ptr + i));
    }
}
