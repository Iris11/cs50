/**********************
*Greedy algorithm
*from pset1 cs50
***********************/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    do
    {
      //prompt user for an non-negative number
      printf("O hai! How many change is owed?\n");
      change = GetFloat();
    }
    while (change < 0);
    
    // convert the change
    int coins = change * 100;
    
    // declare coins variable
    int coins_number = 0; 
    
    //calculate the minimum coins number
    while (coins > 0)
    {
        if (coins >= 25)
        {
            coins = coins - 25;
        }
        else if (coins >= 10)
        {
            coins = coins - 10;
        }
             
        else if (coins >= 5)
        {
            coins = coins - 5;
        }
    
        else 
        {
            coins = coins - 1;
        }
        coins_number++;
    }
    // print the minium amount of coins
    printf("%i\n", coins_number);
}