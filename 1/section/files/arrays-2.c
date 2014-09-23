#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string s ="daven";


    // what will this print out??
    printf("%c%c%c%c%c\n", s[0], s[1], s[2], s[3], s[4]);

    // seg fault
    // s[0] = 'm';

    char s2[5] = {'d', 'a', 'v', 'e', 'n'};

    printf("%c%c%c%c%c\n", s2[0], s2[1], s2[2], s2[3], s2[4]);

    s2[0] = 'm';
    printf("%c%c%c%c%c\n", s2[0], s2[1], s2[2], s2[3], s2[4]);

}
