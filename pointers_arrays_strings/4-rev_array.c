#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  reverses the content of an array of integers
 * start: debut
 * temp:  Box void
 * end: fin
 * @a: caractére
 * @n: tableau
 * Return: n
 */

void reverse_array(int *a, int n)

{

int start = 0;
int end = n - 1;
int temp;

	while (start < end)
	{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;

	start++;
	end--;
	}
}
