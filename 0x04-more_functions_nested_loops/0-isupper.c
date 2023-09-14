#include "main.h"
/**
 * _isupper- checks for uppercase character
 * @c: charter to be checked or computed
 * Return: return 1 when uppercase otherwise
 */
int _isupper(int c)
{
        if (c >= 65 && c <= 90)
        {
                _putchar('A');
                _putchar(':');
                return (1);
        }
        else
        {
                _putchar('a');
                _putchar(':');
                return (0);
        }
}
