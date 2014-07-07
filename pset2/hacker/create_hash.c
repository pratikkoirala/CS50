#define _XOPEN_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
    printf("Choose a password <= 8 characters long.\n");
    
    string s = GetString();

	printf("%s\n", crypt(s, "50"));
}
