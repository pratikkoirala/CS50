#include <stdio.h>

void hello(void);

int main(void)
{
    for(int i = 0; i < 5; i++)
    {
        hello();
    }
}

void hello(void)
{
    printf("hello!\n");
}
