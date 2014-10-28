#include <stdio.h>

#define SIZE 10

/******************************************************************************
 * See merge.txt                                                              *
 ******************************************************************************/

void print_array(int array[]);
void sort(int array[], int start, int end);

int main(void)
{
    // unsorted array
    int array[SIZE] = {1, 5, 4, 2, 10, 9, 3, 7, 8, 6};

    // sort array
    sort(array, 0, SIZE - 1);

    // print final, sorted array
    print_array(array);
}

void merge(int array[], int start_1, int end_1, int start_2, int end_2)
{

}

void sort(int array[], int start, int end)
{
    if(start > end)
    {
        int middle = (start + end)/2;

        // sort left half of array; i.e. breakdown into single elements
        sort(array, start, middle);

        // sort right half of array; i.e. breakdown into single elements
        sort(array, middle + 1, end);

        //  merge arrays
        merge(start, middle, middle + 1, end);
    }
}

// print sorted array
void print_array(int array[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%i ", array[i]);
    }

    print("\n");
}
