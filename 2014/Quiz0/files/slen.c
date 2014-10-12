/*
 * Create your own strlen()!
 */

#include <stdio.h>

// prototype
int slen(char* s);

// just something to show you our slen() works!
int main(int argc, char* argv[])
{
    // if there aren't enough arguments, then bounce
    if(argc != 2)
        return 1;

    // call our function
    int length = slen(argv[1]);

    // print out length
    printf("%i\n", length);
}

// This might be what you need to do on the exam!
int slen(char* s)
{
    // make sure string doesn't equal 0
    if(s == NULL)
        return 0; // if s equals NULL, there can't be a string so return 0;

    // set counter
    int counter = 0;

    // iterate until we find the end of string character
    for(int i = 0; s[i] != '\0'; i++)
    {
        counter++;
    }

    // return length!
    return counter;
}
