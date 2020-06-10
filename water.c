#include <cs50.h>
#include <stdio.h>

int main(void) //always start with this
{
    int minutes = get_int("How many minutes did you shower?"); //get_int function and requiesting a number from user
    printf("minutes: %d\n", minutes); //printing result

    if (minutes > 0) //conditional loop
    {
        int bottles = ( 128 * (1.5 * minutes) ) / 16; //equasion
        printf("bottles: %d\n", bottles); //printing amount of bottles
    }
    else
    {
        printf("Number must be an integer\n"); //prompt for correct number  
    }
    
}
