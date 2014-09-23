/*
 *  add.c:
 *
 *  Use a separate function, add(), to sum two numbers
 */

#include <stdio.h>

// function prototype
int add(int one, int two);

int main(void)
{
    int a = 5;
    int b = 10;

    printf("The answer is: %i\n", add(a, b));

}

int add(int one, int two)
{
    return one + two;
}
