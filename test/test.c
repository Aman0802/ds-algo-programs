#include <stdio.h>

int main()
{
    int seat;
    printf("Enter a seat number ");
    scanf("%d", &seat);
    if (seat > 72 || seat < 0)
    {
        printf("Enter a valid seat birth");
    }
    else
    {
        seat = seat % 8;
        if (seat == 1 || seat == 4)
        {
            printf("\nLower birth\n");
        }
        else if (seat == 2 || seat == 5)
        {
            printf("\nMiddle birth\n");
        }
        else if (seat == 3 || seat == 6)
        {
            printf("\nUpper birth\n");
        }
        else if (seat == 7)
        {
            printf("\nSide lower birth\n");
        }
        else if (seat == 0)
        {
            printf("\nSide upper birth\n");
        }
    }
}

// Sequential
// Selection -  if___else if else, switch____case
// Iteration

// Left

// Conversions
//  boolean
// strings
