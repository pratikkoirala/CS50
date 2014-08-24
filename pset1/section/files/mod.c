#include <stdio.h>

#define MAX 26

int main(void)
{
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

    printf("%c\n", alpha[0%MAX]);
    printf("%c\n", alpha[5%MAX]);
    printf("%c\n", alpha[25%MAX]);
    printf("%c\n", alpha[26%MAX]);
    printf("%c\n", alpha[100%MAX]);
}
