#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that serves as the entry point
 * for the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastdigit; 

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    scanf("%d", &n);

    lastdigit = n % 10;

    if (lastdigit > 5)
        printf("last digit of %d is %d is greater than 5", n, lastdigit);
    else if (lastdigit < 6 && lastdigit != 0)
        printf("last digit of %d is %d  is less than 6 and not 0", n, lastdigit);
    else
        printf("last digit of %d is %d and is 0", n, lastdigit);
    return (0);
}

