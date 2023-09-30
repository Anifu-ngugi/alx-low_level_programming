#include <stdio.h>
#include <stdlib.h>
/**
 * main- the main function
 * @argc: counts what is typed in the command line
 * @argv: array of what is typed or stored in the argc
 * Return: it returns integer
 **/
int main(int argc, char *argv[])
{
	int argcstart0 = argc - 1;
	printf("%d\n", argcstart0);
	(void)argv;
	return (0);
}
