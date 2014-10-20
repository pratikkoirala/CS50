#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <ctype.h>
#include <stdio.h>
#include "helpers.c"

#define ALOT 1000
#define LIMIT 65536

int main(void)
{
    // initialize a big array
    int big_array[ALOT];

    // insert random ints into array
    for(int i = 0; i < ALOT; i++)
    {
        int insert = (int) (rand() * LIMIT);

        big_array[i] = insert;
    }

   for(int i = 0; i < ALOT; i++)
    {
        printf("%i\n", big_array[i]);
    }
}
