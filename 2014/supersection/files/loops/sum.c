#include <stdio.h>

int sum(int x, int y[]);

int main(void)
{
    int array[] = {1,2,3,4,5, 7, 8};
    
    // I do this because I don't want to hardcode the size of the array
    int size = sizeof(array)/sizeof(int);

    // Recursive
    printf("Recursive sum = %i\n", sum(size - 1, array));

    int counter = 0;

    // Iterative
    for(int i = 0; i < size; i++)
    {
        counter = counter + array[i];
    }

    printf("Iterative sum = %i\n", counter);

    return 0;
}

int sum(int x, int y[])
{
    if(x < 0)
        return 0;
    else 
    return sum(x - 1, y) + y[x];
}
