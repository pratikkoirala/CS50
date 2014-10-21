/****************************************************************************
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 ***************************************************************************/

#include <stdbool.h>

#include "dictionary.h"

// struct for trie
typedef struct node
{
    bool is_word;
    struct node* children[26];
} node;

// counter for size
int count = 0;

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    // TODO
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // open dictionary
    FILE* fp = fopen(dictionary, "r");

    // if you can't open
    if(fp == NULL)
        return false;

    // root node
    node* root = malloc(sizeof(node));


    // use fscanf to get the string, then break it down?
    int c = fgetc(fp);

    while(c != EOF)
    {
        int index = c = 'a';

        if(root->children[index] == NULL)
        {
            node*new_node = malloc(sizeof(node));
            
            root->
        }
    }

    return false;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    return count;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    return false;
}
