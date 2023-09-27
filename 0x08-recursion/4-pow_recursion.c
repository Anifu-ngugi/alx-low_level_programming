#include "main.h"
/**
 *  _pow_recursion- func that prints x power y
 *  @x: parameter to be computed
 *  @y: the parameter to be computed
 *  Return: rerurns int
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
		return (x * _pow_recursion(x, y - 1));
}
