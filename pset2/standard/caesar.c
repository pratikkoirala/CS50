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

    // convert second argument into integer
	int mask = atoi(argv[1]);

	// store string to convert into an array of chars
	char* input= GetString(); 

	for(int i = 0; i < strlen(input); i++)
	{
    	if(input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] = input[i] - 'A';
			input[i] = (input[i] + mask) % 26;
			input[i] = input[i] + 'A';
		}
		else if(input[i] >= 'a' && input[i] <= 'z')
		{
			input[i] = input[i] - 'a';
			input[i] = (input[i] + mask) % 26;
			input[i] = input[i] + 'a';
		}
		else
		    continue;
	}

	printf("%s\n", input);

}
