/*
 * Some illumination on strings and what can be changed and what can't!
 * In short, everything here is in stack memory! Well, why? Since we are
 * never calling malloc() we can be sure that nothing is in the heap!
 * So, all these variables are in the stack, but there are some differences. These are
 * all strings, however, when you do something like char* s = "string" that is a
 * string constant and that is in read-only memory (if you uncomment the below parts then it
 * will segfault!). The problem is not that it's a pointer, if you look below, if I have a pointer
 * to an int, I can change that fine - really, the problem only arises because C takes a string
 * initialized like char* s = "string" as a string constant!
 */


#include <stdio.h>

int main(int argc, char* argv[])
{
    // make sure there are enough arguments!
    if (argc != 2)
        return 1;

/*    char* s = "hello"; // THIS IS A STRING CONSTANT AND IN READ ONLY MEMORY */

    char array[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // this isn't in read only!

    // some random int!
    int x = 5;

    // a pointer to said int
    int* y = &x;

/*    s[0] = 'd';  // THIS WILL SEGFAULT  */

    array[0] = 'd'; // this is fine!

    printf("%s\n", array); // will print out "dello"

    argv[1][0] = 'd'; // this is also fine!

    printf("%s\n", argv[1]); // will print out "dello" if you pass in hello as a cmd line argument

    // change value to show pointers to ints are not the same as string constants
    *y = 50;

    // print it out
    printf("%i and %i are the same thing\n", *y, x);
}
