#include "main.h"
/**
 * reverse_array- function that prints arry in revrse
 * @a: the arry lst
 * @n: number of times to be computed
 * Return: void 0 (success)
 **/
void reverse_array(int *a, int n)
{
	int start = 0;

	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
