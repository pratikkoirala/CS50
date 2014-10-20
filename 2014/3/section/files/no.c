#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <ctype.h>
#include <stdio.h>
#include "helpers.c"

#define ALOT 10000
#define LIMIT 65536

int main(void)
{
   for(int i = 0; i < ALOT; i++)
    {
        printf("%i\n", ALOT - i);
    }
}
