#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, res;
    char op;
    printf("Enter the operation you want to perform ");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf("First Number: ");
        scanf("%lf", &a);
        printf("Second Number: ");
        scanf("%lf", &b);
        res = a + b;
        printf("\nThe sum of %lf and %lf is %lf\n", a, b, res);
        break;
    case '-':
        printf("First Number: ");
        scanf("%lf", &a);
        printf("Second Number: ");
        scanf("%lf", &b);
        res = a - b;
        printf("\nThe difference of %lf and %lf is %lf\n", a, b, res);
        break;
    case '*':
        printf("First Number: ");
        scanf("%lf", &a);
        printf("Second Number: ");
        scanf("%lf", &b);
        res = a * b;
        printf("\nThe product of %lf and %lf is %lf\n", a, b, res);
        break;
    case '/':
        printf("First Number: ");
        scanf("%lf", &a);
        printf("Second Number: ");
        scanf("%lf", &b);
        if (b == 0)
        {
            printf("Cannot divide by 0!!\n");
        }
        else
        {
            res = a / b;
            printf("\nThe sum of %lf and %lf is %lf\n", a, b, res);
        }
        break;
    case '%':
        printf("First INTEGER: ");
        scanf("%lf", &a);
        printf("Second INTEGER: ");
        scanf("%lf", &b);
        res = (int)a % (int)b;
        printf("\nThe remainder of %lf and %lf is %lf", a, b, res);
        break;

    // calculates root
    // case 'r':
    //     printf("Enter the Number: ");
    //     scanf("%lf", &a);
    //     res = sqrt(a);
    //     printf("\nThe square root of %lf is %lf", a, res);
    //     break;

    // calculates power
    case 'p':
        printf("First Number: ");
        scanf("%lf", &a);
        printf("Second Number: ");
        scanf("%lf", &b);
        res = a + b;
        printf("\nThe sum of %lf and %lf is %lf", a, b, res);
        break;
    // returns the mod value
    case 'm':
        printf("First Number: ");
        scanf("%lf", &a);
        printf("Second Number: ");
        scanf("%lf", &b);
        res = a + b;
        printf("\nThe sum of %lf and %lf is %lf", a, b, res);
        break;
    default:
        printf("Enter a valid operation!");
    }
}