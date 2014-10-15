#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    // make sure there are 2 arguments
    if (argc != 2)
        return 1;

    // iterate over string
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        // if char is a lower case letter, make it upper case
        if(argv[1][i] > 'a' && argv[1][i] < 'z')
            argv[1][i] = argv[1][i] - 'a' + 'A';
    }

    // print out
    printf("%s\n", argv[1]);;

    // dope
    return 0;
}
