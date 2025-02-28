#include "main.h"
#include <stdio.h>

/**
 * *leet -   function that encodes a string into 1337
 * @str:  the string to be encoded
 * Return: the encoded string
 */

char *leet(char *str)

{
	char *p = str;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_vals[] = "44330771";
	int i;

	while (*p)
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
		if (*p == leet_chars[i])
		{
		*p = leet_vals[i];
		break;
		}
	}
	p++;
	}
	return (str);
}
