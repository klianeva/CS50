#include <cs50.h>
# include <stdio.h>

int main (void)
{
  int n; //height
  int j;
    do
    {
        n = get_int("Positive number less than 23: ");
    }
  while (n <= 0 || n >= 23);

    //For loop for the rows
    for (int i = 0; i < n; i++){
        // For loop for the spaces and hashtags
        for(j = 0; j < n-1-i; j++){
            printf(" ");
        }
        for(j = 0; j < i + 1; j++){
            printf("#");
        }
    printf("\n");
    }
    return 0;
}