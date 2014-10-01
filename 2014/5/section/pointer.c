#include <stdio.h>

int main(void)
{
    int* p;
    int i = 10;
    p = &i;

    printf("i is currently %d and p is currently %d\n", i, *p);

    i = 50;

    // what will *p be? what is p?
    printf("i is currently %d and p is currently %d\n", i, *p);

    printf("plain p, no astericks, is %p\n", p);

    // well what about &p?
    printf("plain p, no astericks, is %p\n", &p);

}
