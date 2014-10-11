#include <stdio.h>

void bubble(int array[], int size);

int main(void)
{
    int size = 10;

    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // bubble sort
    bubble(array, size);

    // print out array
    for(int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n");
}

// bubble sort optimized - O(n^2) / Omega(n)
void bubble(int array[], int size)
{
    for(int i = 0; i < size; size--)
    {
        int swaps = 0;

        // Omega (n-1)
        for(int k = i; k < size - 1; k++) 
        {
            if(array[k+1] < array[k])
            {
                int tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp;

                swaps++;
            }
        }

        if (swaps == 0)
            return;
    }
}
