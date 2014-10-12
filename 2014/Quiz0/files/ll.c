#include <stdio.h>
#include <stdlib.h>

/*
 * Create a linked list, move things around, and then iterate over the linked list printing things out!
 *
 * A couple things to keep in mind! Remember the '.' operate when you want to reference an element of a struct? Well,
 * the '->' operator is just like it except it is used when dealing with a pointer to a struct! What it literally means is:
 * "take a pointer to a struct, GO to the struct, and then go to whatever member is indicated".
 *
 *  Also, be careful about inserting new things into a list and iterating over a linked list - follow the examples below!
 */


// here is where we define out struct!
typedef struct node {

    int i;
    struct node* ptr;

} node;

int main(void)
{
    // create 3 nodes by malloc'ing memory!
    node* node_0 = malloc(sizeof(node));
    node* node_1 = malloc(sizeof(node));
    node* node_2 = malloc(sizeof(node));

    // set the value of i in node_0 to 0 and point it to node_1
    node_0 -> i = 0;
    node_0 -> ptr = node_1;

    // set the value of i in node_1 to 1 and point it to node_2
    node_1 -> i = 1;
    node_1 -> ptr = node_2;

    // set the value of i in node_2 to 2 and end the list by pointing it at NULL
    node_2 -> i = 2;
    node_2 -> ptr = NULL;

    // move node_2 to the beginning of the list
    node_2 -> ptr = node_0;

    // set node_1 -> ptr to NULL to end the list
    node_1 -> ptr = NULL;

    // print out list by 1st having an extre node pointer you can move around
    node* head_ptr = node_2;

    // go through nodes
    while(head_ptr != NULL)
    {
        // print out value
        printf("%i\n", head_ptr -> i);

        // move pointer down the linked list
        head_ptr = head_ptr -> ptr;
    }

    // prevent memory leaks!; to check, run "valgrind ./ll"
    free(node_0);
    free(node_1);
    free(node_2);

    // return
    return 0;
}
