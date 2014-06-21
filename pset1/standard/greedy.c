#include <stdio.h>
#include <math.h>

#define quarter 	25
#define dime 		10
#define nickel 		5
#define penny 		1

int main(int argc, char* argv[])
{
	printf("Oh hai! How much change is needed? ");
	
	float change;
	scanf("%f", &change);

	while(change < 0)
	{
		printf("Woops! Try again please! ");
		scanf("%f", &change);
	}

	change = round(change*100);

	int counter = 0;

	while(change >= quarter)
	{
		change = change - quarter;
		counter++;
	}


	while(change >= dime)
	{
		change = change - dime;
		counter++;
	}


	while(change >= nickel)
	{
		change = change - nickel;
		counter++;
	}

	counter = counter + change;

	printf("So, I think you have %i coins?\n", counter);
}
