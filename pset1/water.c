#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //lenth of your shower minutes,an positive integer should be guven
    printf("minutes:");
    int n = GetInt();
    
    //number of bottles of water
    int bottlesnumber = n * 1.5 * 128 / 16;
    printf("bottles:%i\n", bottlesnumber);
}