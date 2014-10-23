#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int i;
    struct node* next;
} node;

node* array[10];

// prototype
void create(int incre);

int main(void)
{
    for(int i = 0; i < 20; i++)
    {
        create(i);
    }

    // test
    node* check = array[9];

    while(check != NULL)
    {
        printf("%i\n", check -> i);
        check = check -> next;
    }
}


void create(int incre)
{
    node* ptr = malloc(sizeof(node));

    ptr->i = incre % 10;

    if(array[incre] == NULL)
        array[incre] = ptr;
    else
        ptr->next = array[incre];
        array[incre] = ptr;
}
