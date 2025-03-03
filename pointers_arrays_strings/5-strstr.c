#include "main.h"
#include <stdio.h>

/**
* *_strstr -   locates a substring
* @haystack:  the string
* @needle: the first occurrence of the substring
* Return: null
*/

char *_strstr(char *haystack, char *needle)

{
	if (*needle == '\0')
	return (haystack);

	while (*haystack)
	{
	char *hay = haystack;
	char *nee = needle;

	while (*hay && *nee && *hay == *nee)
	{
	hay++;
	nee++;
	}
		if (*nee == '\0')
		return (haystack);
	haystack++;
	}
	return (NULL);
}
