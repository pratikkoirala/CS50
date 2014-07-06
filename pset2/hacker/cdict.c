#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 8

/*
 *  This should create all possible permutations of 8 characters. We truncate at 8 because
 *  crypt() truncates at 8; it only cares about he first eight characters. With this exhaustive
 *  dictionary, one should be able to run crypt() on the entries and eventually find a matching
 *  password. Dictionary should be 65/P/8 or 65!/57! (~2.03 * 10^14) words large. Is this feasible? 
*/

//*** Instead of storing the words, why not process them as they come in; eliminates need excessive storage.
//*** Parallel processing?

int main(void)
{
    // possible chars of password
    char* input = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890./";

    // length of input
    int pos = strlen(input);

    // allocate memory for each attempt to create a word
    char attack[MAX] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    // create all word combinations
    for(int a = 0; a < pos; a++)
    {
        attack[0] = input[0];

        for(int b = 0; b < pos; b++)
        {
            attack[1] = input[0];

            for(int c = 0; c < pos; c++)
            {
                attack[2] = input[0];

                for(int d = 0; d < pos; d++)
                {
                    attack[3] = input[0];

                    for(int e = 0; e < pos; e++)
                    {
                        attack[4] = input[0];

                        for(int f = 0; f < pos; f++)
                        {
                            attack[5] = input[0];

                            for(int g = 0; g < pos; g++)
                            {
                                attack[6] = input[g];

                                for(int h = 0; h < pos; h++)
                                {
                                    attack[7] = input[h];

                                    printf("%s\n", attack); 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
