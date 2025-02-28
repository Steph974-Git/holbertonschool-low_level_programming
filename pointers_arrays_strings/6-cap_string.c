#include "main.h"
#include <stdio.h>

/**
 * *cap_string -  changes all
 * @str:  all lowercase letters
 * Return: str
 */

char *cap_string(char *str)

{
	int i = 0;
	size_t j;
	int cap = 1;
	char arr[14] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
			' ', '\n', '\t'};

	while (str[i] != '\0')
	{
		for (j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (str[i] == arr[j])
			{
				cap = 1;
				break;
			}
		}
		if (cap == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			cap = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cap = 0;
		}
		else if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && cap == 1)
		{
		}
		else
		{
			cap = 0;
		}
		i++;
		}
	return (str);
}
