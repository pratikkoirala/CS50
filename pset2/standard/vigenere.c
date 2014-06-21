#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	// check that there are two command line arguments
	if(argc != 2)
	{
		printf("Input: caesar #\n");
		return 1;
	}

	char* mask = (argv[1]);

	int masklength = strlen(mask);

	for(int i = 0; i < masklength; i++)
	{
		if(!isalpha(mask[i]))
			return 1;
		else
		{
			if(mask[i] >= 'A' && mask[i] <= 'Z')
				mask[i] = mask[i] - 'A';
			else
				mask[i] = mask[i] - 'a';
		}
	}

	// store string into an array of chars
	char* input= GetString(); 

	for(int i = 0, k = 0; i < strlen(input); i++, k++)
	{
		if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
		{
			if(input[i] >= 'A' && input[i] <= 'Z')
			{
				input[i] = input[i] - 'A';
				input[i] = (input[i] + mask[k%masklength]) % 26;
				input[i] = input[i] + 'A';
			}
			else
			{
				input[i] = input[i] - 'a';
				input[i] = (input[i] + mask[k%masklength]) % 26;
				input[i] = input[i] + 'a';
			}
		}
		else
			k--;
	}

	printf("%s\n", input);

}
