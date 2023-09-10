#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description-This is the main function that serves as the entry point
 * for the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);

	if (n > 0)
		printf("%d is positive\n", n);							
    	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
