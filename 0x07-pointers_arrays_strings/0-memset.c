#include "main.h"
/**
 * _memset- function that fills memo with n bytes
 * @s: pointers to start of the arry
 * @b: the constant to be copied to the meme block
 * @n: the number of times the s to be set
 * Return: returns cahr s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char k = (unsigned char)b;
	 unsigned int i;

	for (i = 0 ; i < n ; i++) /**n is the const number of time **/
	{
		s[i] = k;
	}
	return (s);
}
