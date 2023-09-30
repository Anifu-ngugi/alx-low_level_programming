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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
