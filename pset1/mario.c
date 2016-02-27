/******************************
 *generate a half-pyramid
 *align the bottom-left corner of the half-pyramid with 
 *the left-hand edge of terminal window
 *******************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // give me a half-pyramid of height
    int n; 
    
    //  get input satisfying our program
    do
    {
        printf("height:");
        n = GetInt();
    }
    while (n < 0 || n > 23);
    
    // draw the half pyramid
    for (int i = 0; i < n; i++)
    {
        // print the space
        for (int j = 0; j < n - i - 1; j++)
        {
            printf (" ");
        }
             
            
        // print the '#' character
        for (int e = 0; e < i + 2; e++ )
        {    
            printf ("#");
        }
        
        // print the new line
        printf ("\n");
    }
}            
    
    
        
    



