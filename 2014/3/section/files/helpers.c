/*
 *    A helper file with all the sorts!
 */

#include "helpers.h"
#include <stdio.h>


/*
 * Bubble Sort - larger values tend to bubble to the top. Here you have the size value
 * decreasing, which signifies that after each iteration of the loop, the far right side
 * is sorted. O(n^2) and Omega(n)
 */
int* bubble_sort(int array[], int size)
{
    for(int i = 0; i < size; size--)
    {
        int swaps = 0;

        for(int k = i; k < size - 1; k++)
        {
            if(array[k] > array[k + 1])
            {
                // swap values
                int tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp;
                swaps++;
            }
        }

        // if bubble sort iterated through all the elements at least once and didn't find anything
        // out of place, there are no swaps and everything must be sorted
        if(swaps == 0)
            break;
    }

    return array;
}

/*
 * Selection Sort - kind of like all the sorts, you're going to have a part of the array that is sorted and
 * another part of the array that is unsorted. What selection sort does is iterates over the unsorted part
 * of the array looking for the smallest element -> finds it -> then places it at the end of the sorted array
 * (since each next smallest element is going to be bigger than all elements currently in the sorted array).
 * O(n^2), Omega(n^2)
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
 * Insertion Sort - place the next element in the unsorted array into the correct position in the sorted array.
 * O(n^2) and Omega(n)
 */
int* insertion_sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        // next element that isn't sorted
        int next = array[i + 1];
        int min = i;

        // find where to place next - if next is never less than array[min]
        // then the while loop will never evaluate true, so you're just iterating
        // through the outer for loop (n)
        while(next < array[min] && min >= 0)
        {
            // swap
            int temp = array[min];
            array[min] = next;
            array[min + 1] = temp;

            // decrement counter
            min--;
        }

    }

    return array;
}

/*
 * Merge Sort
 */

/*
 * Heapsort Sort
 */

/*
 * Quicksort Sort
 */

/*
 * Radix Sort
 */

/*
 * Bucket Sort
 */

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


