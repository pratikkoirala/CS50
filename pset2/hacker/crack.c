#define _XOPEN_SOURCE

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>

int search(char* d, char* h);

/*
 *  This is only a partial solution, as trying to brute force your way though so many passwords takes
 *  a long time.
 *
 *  HASH: 50zPJ1UFIYY0o     PASSWORD: 
 *  HASH: 50q.zrL5e0Sak     PASSWORD: password
 *  HASH: 50yoN9fp966dU     PASSWORD: crimson
 *  HASH: HA6101/.LeOak     PASSWORD: 
 */

// make sure to link in -lcrypt when compiling!
int main(int argc, char* argv[])
{
	char* hash = NULL;

    // check that user provides an encrypted password
	if(argc != 2)
		return 1;
	else
		hash = argv[1];

    // search two dictionaries
    if(!search("/usr/share/dict/words", hash))
        return 0;
    else
        search("/home/cs50/pset6/dictionaries/large", hash);

	return 0;
}

int search(char* dictionary, char* hash)
{
	FILE* fp = fopen(dictionary, "r");

    // check if dictionary could be opened
	if(fp == NULL)
		return 1;
	else
	{
	    // choose something big enough not to segfault
		char dictionary_word[120];

        // iterate through dictionary
		while(fscanf(fp, "%s", dictionary_word) != EOF)
		{
	        char x[2];

	        // you can do this, and don't need to iterate through all combinations of
	        // the salt, because the first two characters in the hash ARE the salt
            x[0] = hash[0];
            x[1] = hash[1];
  			string result = crypt((const char*) dictionary_word, (const char* ) x);
        	if(!strcmp(result, hash))
            {
	            printf("%s\n", dictionary_word);
	            return 0;
            }
		}

        // return 1 if password was not found
	    return 1;
	}
}
