#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string heads[2];
    heads[0] = "Gabe";
    heads[1] = "Rob";

    // print out memory address
    printf("%p\n", heads);

    for(int i = 0; i < 2; i++)
    {
        printf("hi %s!\n", heads[i]);
    }
}
