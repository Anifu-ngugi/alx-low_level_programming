#include <stdlib.h>
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
	/* your code goes there */
	return (0);
}
