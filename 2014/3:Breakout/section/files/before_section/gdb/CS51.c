#include <stdio.h>
#include <cs50.h>

void improve(string s);

int main(int argc, char* argv[])
{
    // it's a cool class, yeah
    char s[] = "CS51 Rocks!";

    improve(s);

    // print it out!
    printf("%s\n", s);
}

void improve(string s)
{
    // 50's better tho!
    s[3] = '0';
}
