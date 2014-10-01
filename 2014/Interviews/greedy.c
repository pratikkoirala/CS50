/*
* greedy.c
*
* Determines min number of coins
*/

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    float dollars = 0;

    // collect user input
    do
    {
        printf("Change owed: ");
        dollars = GetFloat();
    }
    while (dollars < 0);

    // convert from dollars to cents
    int cents = (dollars * 100);

    // count quarters
    int quarters = cents / 25;
    cents = cents % 25;

    // count dimes
    int dimes = cents / 10;
    cents = cents % 10;

    // count nickels
    int nickels = cents / 5;
    cents = cents % 5;

    // count pennies
    int pennies = cents;

    // sum coins and print result
    int coins = quarters + dimes + nickels + pennies;
    printf("%d\n", coins);

    return 0;
 }

