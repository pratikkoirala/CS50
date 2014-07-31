#include <stdio.h>
#include <cs50.h>

#define SIZE 8

// prototypes
void sort(int array[], int length);
void print(int array[]);

int main(void)
{
    int array[SIZE] = {3, 7, 4, 9, 5, 2, 6, 1};

    sort(array, SIZE);

    print(array);
}

// insertion sort; time complexity O(n^2), space complexity O(1)
void sort(int array[], int length)
{
    // go through list
    for(int k = 0; k < length - 1; k++)
    {
        // choose element right outside sorted part of list
        int insert = array[k+1];

        // see if insert is smaller than any element in sorted list
        for(int i = 0; i < k + 1; i++)
        {
            // element is smaller than some element in sorted list
            if(insert < array[i])
            {
                int temp = array[i];

                // shift everything down
                for(int h = i; h <= k; h++)
                {
                    int temp2 = array[h+1];
                    // replace array[h+1] with the item before it
                    array[h+1] = temp;
                    // store in temp the element, array[h+1], that was just replaced
                    temp = temp2;
                }

                // insert new element at beginning of shifted array
                array[i] = insert;

                // break out of loop
                break;
            }
        }
    }
}

// helper function to print out array
void print(int array[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}
