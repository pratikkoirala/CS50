#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

    // why do I have to do this?
    if(argc != 2)
    {
        printf("Sorry! Not enough arguments!\n");
        return 1;
    }

    int number = atoi(argv[1]);
    printf("Hi! You gave me a %d\n", number);
}
