#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>

#define _XOPEN_SOURCE
#define LETTERS 26
#define NUMBERS 10

/*
 * Crypt takes two arguments, both of const char*. The first is the key that you want
 * to encrypt. The second is salt, which is going to be used to "perturb" the algorithm
 * in 1 of 4096 different ways.  So, basically, the algorithm is going to hash a key, and
 * the salt is going to add an additional layer of encryption because the hash algorithm
 * has 4096 different possibilies depending on the salt. I think when looking up passwords,
 * programs usually take a plaintext word, try out all of 4096 different possible hashes,
 * and if it is found returns. With the salt, I don't think it is possible to have one-to-one
 * lookup.
 *
 * A const char*, you can't change the character to which the pointer points to, however, you
 * can change the direction of the pointer.
 *
 * Char representations of integers are different than a string representation of that integer.
 * For example, char '1' in string form is "\001", and not just "1"
*/

int main(int argc, char* argv[])
{
	char* hash = NULL;

	if(argc != 2)
		return 1;
	else
		hash = argv[1];

	char* salt = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789./"};

	FILE* fp = fopen("/usr/share/dict/words", "r");

	if(fp == NULL)
		return 1;
	else
	{
		// bad
		char dictionary_word[120];

		while(fscanf(fp, "%s", dictionary_word) != EOF)
		{
			char x[2];
			x[0] = hash[0];
			x[1] = hash[1];
			string result = crypt((const char*) dictionary_word, (const char* ) x);
			if(!strcmp(result, hash))
			{
				printf("%s\n", dictionary_word);
				break;
			}
		}
	}
	return 0;
}

