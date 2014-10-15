#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // make sure there are 2 arguments
    if (argc != 3)
        return 1;

    int number = atoi(argv[1]);
    int pow = 1;

    if(atoi(argv[2]) == 0)
        number = pow;
    else
    {
        // iterate over string
        for(int i = 0; i < atoi(argv[2]); i++)
        {
            pow = pow * number;
        }
    }

    // print out
    printf("%i\n", pow);

    // dope
    return 0;
}
