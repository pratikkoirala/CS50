#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// define node struct
typedef struct node
{
    int i;
    struct node* next;
} node;

// prototypes
void insert(int n);
bool remove_ll(int n);
void print_list(node* ptr);

node* list;

int main(void)
{

    list = NULL;

    print_list(list);

    insert(5);
    print_list(list);

    insert(10);
    print_list(list);

    insert(15);
    print_list(list);

    remove_ll(10);
    print_list(list);

    remove_ll(15);
    print_list(list);

    remove_ll(5);
    print_list(list);

    remove_ll(1);
    print_list(list);
}


/*
 * insert at the beginning (so prepend at the beginning of a list) - assume a pointer, list, to the
 * head of the linked list, like in the other examples
 */
void insert(int n)
{
    // malloc space for node
    node* ptr = malloc(sizeof(node));

    // make sure malloc returned successfully
    if(ptr == NULL)
        return;

    // set value in node
    ptr->i = n;

    // if linked list is currently empty
    if(list == NULL)
    {
        list = ptr;
    }
    // place element at start of linked list
    else
    {
        ptr->next = list;
        list = ptr; /* update current head of linked list */
    }

    return;
}

/*
 * remove from a singly linked list (slightly different that working with a dll(doubly linked list))
 */

bool remove_ll(int n)
{
    // set pointer to beginning of the list
    node* front = list;

    // so nothing in list
    if(front == NULL)
        return false;

    // element is at the very front of list
    if(list->i == n)
    {
        list = front->next;
        free(front);
        return true;
    }

    // only one element in list
    if(front->next == NULL)
    {
        if(front->i == n)
        {
            free(front);
            list = NULL;
            return true;
        }
        else
            return false;
    }

    // it'll be easiest with two ptrs to remove from a singly linked list
    node* back = front;
    front = front->next;

    // iterate over list
    while(front != NULL)
    {
        if(front-> i == n)
        {
            back->next = front->next; /* skip over node you're deleting */
            free(front);
            return true;
        }
        else
        {
            // iterate down the list
            back = front;
            front = front->next;
        }
    }

    return false;
}

/*
 * helper function just to print out linked list
 */
void print_list(node* ptr)
{
    while(ptr != NULL)
    {
        printf("%i ", ptr->i);
        ptr = ptr->next;
    }

    printf("\n"); /* Zabie sucks */
}
