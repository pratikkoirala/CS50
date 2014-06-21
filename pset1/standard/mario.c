#include <stdio.h>

void printPyramid(int x); // prototype

int main(int argc, char* argv[])
{
	printf("So, like hi! How big do you want your 'mid? Somewhere between 0 and 23 please! ");

	int size;

	do{
		scanf("%d", &size); // have the int point to (hold the memory address) for whatever was inputted
	} while(size <= 0 || size > 23);

	printf("Height: %.2i\n", size);
	printPyramid(size);
}


void printPyramid(int x)
{
	if(x == 0)
		return;
	else
	{
		// this is the loop for the height of the pyramid
		for(int i = 0; i < x; i++)
		{
			for(int h = 0; h < (x - i); h++)
				printf(" ");
			for(int k = 0; k <= i+1; k++)
				printf("#");
			printf("\n");
		}
	}
}
