/*
 *    A helper file with all the sorts!
 */

#include "helpers.h"
#include <stdio.h>

int temp[60000] = {0};

/*
 * Bubble Sort
 */
int* bubble_sort(int array[], int size)
{
    for(int i = 0; i < size; size--)
    {
        for(int k = i; k < size - 1; k++)
        {
            if(array[k] > array[k + 1])
            {
                // swap values
                int tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp;
            }
        }
    }

    return array;
}

/*
 * Selection Sort
 */
int* selection_sort(int array[], int size)
{
    for(int k = 0; k < size; k++)
    {
        // initial minimum value
        int min = array[k];

        for(int i = k + 1 ; i < size; i++)
        {
            if (array[i] < min)
            {
                int tmp = array[i];
                array[i] = min;
                min = tmp;
                array[k] = min;
            }
        }
    }

    return array;
}

/*
 * Insertion Sort
 */
int* insertion_sort(int array[], int size)
{
    // sort through array
    for(int i = 1; i < size; i++)
    {
        // start of the sorted array
        int j = i - 1;

        // if part of unsorted array is smaller than a member in the sorted array
        if (array[i] < array[j])
        {
            int to_sort = array[i];

            // shift down
            while(j >= 0 && to_sort < array[j])
            {
                array[j + 1] = array[j];
                j--;
            }

            array[j + 1] = to_sort;
        }
    }

    return array;
}

/*
 * Merge Sort from Study50
 */
void merge (int array[], int start_1, int end_1, int start_2, int end_2)
{
    int length = end_2 - start_1 + 1;
    int index = start_1;

    // While there are elements in both subarrays
    while (start_1 <= end_1 && start_2 <= end_2)
    {
        // Compare numbers at the start of the subarrays
        if (array[start_1] <= array[start_2])
        {
            // Append smaller to merged array
            temp[index] = array[start_1];
            index++;
            start_1++;
        }
        else
        {
            // Append smaller to merged array
            temp[index] = array[start_2];
            index++;
            start_2++;
        }
    }

    // While elements remain in subarray 1 (but not subarray 2)
    while (start_1 <= end_1)
    {
        // Append element to merged array
        temp[index] = array[start_1];
        start_1++;
        index++;
    }

    // While elements remain in subarray 2 (but not subarray 1)
    while (start_2 <= end_2)
    {
        // Append element to merged array
        temp[index] = array[start_2];
        start_2++;
        index++;
    }

    // Copy newly sorted array over to original array
    for (int i = end_2, j = 0; j <= length; i--, j++)
    {
        array[i] = temp[i];
    }
}

void sort (int array[], int start, int end)
{
    if (end > start)
    {
        int middle = (start + end) / 2;

        // sort left half
        sort(array, start, middle);

        // sort right half
        sort(array, middle + 1, end);

        // merge the two halves
        merge(array, start, middle, middle + 1, end);
    }
}

/*
 * Print out an array
 */

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n");
}


