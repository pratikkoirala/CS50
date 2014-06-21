#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char* argv[])
{
	// check that there are two command line arguments
	if(argc != 2)
	{
		printf("Input: caesar #\n");
		return 1;
	}

	int mask = atoi(argv[1]);

	// store string to convert into an array of chars
	// printf("What string would you like to test?\n");
	char* input= GetString(); 

	for(int i = 0; i < strlen(input); i++)
	{
		if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
		{
			if(input[i] >= 'A' && input[i] <= 'Z')
			{
				input[i] = input[i] - 'A';
				input[i] = (input[i] + mask) % 26;
				input[i] = input[i] + 'A';
			}
			else
			{
				input[i] = input[i] - 'a';
				input[i] = (input[i] + mask) % 26;
				input[i] = input[i] + 'a';
			}
		}
	}

	printf("%s\n", input);

}
