#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Hi!, give me a natural number less than 2 please!\n");
    int n = GetInt();

    switch (n)
    {
        case 0:
            printf("Uhh, is this a natural number? I'm not sure!\n");
            break;
        case 1:
            printf("Thanks for the 1\n");
            break;
        case 2:
            printf("Thanks for the 2\n");
            break;
        default:
            printf("Thanks for nothing!\n");
    }   
}
