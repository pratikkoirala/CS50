#include <stdio.h>

#define SIZE 10

void sort(int array[], int size);
void print(int array[]);

int main(void)
{
    // sample array
    int array[SIZE] = {55, 10, 50, 41, 33, 4, 3, 1, 22, 24};

    print(array);

    // selection sort
    sort(array, SIZE);

    // print out array
    print(array);
}

void sort(int array[], int size)
{
    // sorted part of array
    for(int i = 0; i < size - 1; i++)
    {
        // smallest element and its position in sorted array
        int smallest = array[i];
        int position = i;

        // unsorted part of array
        for(int k = i + 1; k < size; k++)
        {
            // find the next smallest element
            if(array[k] < smallest)
            {
                smallest = array[k];
                position = k;
            }
        }

        // swap
        int temp = array[i];
        array[i] = smallest;
        array[position] = temp;
    }
}

// print out array
void print(int array[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}
