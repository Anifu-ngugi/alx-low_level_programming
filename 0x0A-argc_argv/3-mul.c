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
	int multiply = 1;

	if (argc == 3)
	{
	for (i = 1 ; i < argc ; i++)
	{
	multiply *= atoi(argv[i]);
	}
	printf("%d\n", multiply);

	return (multiply);
	}
	else
	{
		printf("Error \n");
	}
	return (0);
}
