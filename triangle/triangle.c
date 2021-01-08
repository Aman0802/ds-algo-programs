#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the 3 sides of the triangle. ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && a == c)
            printf("It is an equilateral triangle\n");
        else if ((a == b && a != c) || (a == c && a != b) || (b == c && a != c))
            printf("It is an isosceles triangle\n");
        else
            printf("It is a scalene triangle\n");
    }
    else
    {
        printf("Enter valid arguments!\n");
    }
}