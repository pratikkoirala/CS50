#include <stdio.h>

int factorial(int number);

int main(void)
{
    int number = 5;

    int answer = factorial(number);

    printf("%i\n", answer);
}

int factorial(int number)
{
    if(number == 1)
        return 1;
    else
        return 1 * number (2) * number (3) * number (4) * number (5);
}
