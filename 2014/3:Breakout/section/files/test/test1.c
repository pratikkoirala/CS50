#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int* test = malloc(sizeof(int) * 5);

    for(int i = 0; i < 5; i++)
    {
        *(test + i) = i;
    }

    printf("%i\n", *(test + 4));

}
