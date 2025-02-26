#include "main.h"
#include <stdio.h>

/**
 * rev_string  -  reverses a string
 * @s: My School
 * end--
 */

void rev_string(char *s)
{
	char tmp;
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
		end++;
	end--;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
