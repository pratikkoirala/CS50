#include <stdio.h>
#include <cs50.h>

#define SIZE 10

/******************************************************************************
 * Bubble Sort runs in O(1) space complexity and O(n^2) time complexity. It   *
 * works on an array of size n by iterating across the
 *****************************************************************************/

// prototype
void sort(int array[], int n);
void print(int array[]);

int main(void)
{
    // sample array
    int array[SIZE] = {1, 4, 10, 11, 2, 50, 51, 3, 32, -15};

    // bubble sort
    sort(array, SIZE);

    // print sorted array
    print(array);
}

// bubble sort
void sort(int array[], int n)
{
    // to move an element from one end to the other in an array of size n,
    // you only need n - 1 moves; cycle through array.
    for(int k = 0; k < n - 1; k++)
    {
        // optimize; check if there are no swaps
        int swaps = 0;

        // switch adjacent elements if out of order
        for(int i = 0; i < n - 1 - k; i++)
        {
            if(array[i] > array[i + 1])
            {
                swaps++;

                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
            }
        }

        if(!swaps)
            break;
    }
}

// print out sorted array
void print(int array[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}
