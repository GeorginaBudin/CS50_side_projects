#import <stdio.h>
#import <cs50.h>
#import <math.h>

int main(void)
{
    //declare the available coins array
    int coins[4] = {25, 10, 5, 1}; 
    //get user cash input until positive value
    float dollars;
    do
    {
        dollars = get_float("How much change do you need? :");
    }
    while (dollars < 0);
    //convert dollars to cents
    int cents = round(dollars * 100);
    
    //declare new change array. Number of coins to return
    int change[4] = {0, 0, 0, 0};
    int i = 0;
    //Calculate change
    do
    {
        change[i] = cents / coins[i];
        cents = cents % coins[i];
        i++;
    }
    while (cents != 0);

    for (int j = 0; j < 4; j++)
    {   
        if (change[j] > 0) 
        {
            printf("%i coins of %i cents\n", change[j], coins[j]);
        }
    }
    
}

