#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
        return 1;

    int number = 0;

    for(int i = strlen(argv[1]) - 1, k = 0; i >= 0; i--, k++)
    {
        number = (argv[1][i] - '0') * pow(10.0, k) + number;
    }

    printf("%i\n", number);;
}
