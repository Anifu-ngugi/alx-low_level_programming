#include "main.h"
/**
 * _puts_recursion- function that prints a strings and new line
 * @s: computed string
 * Return: void 0
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);/**curent value**/
	_puts_recursion(s + 1);/**recusively call the function with the nxt char**/
}

