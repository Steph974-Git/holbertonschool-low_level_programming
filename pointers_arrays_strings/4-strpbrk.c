#include "main.h"
#include <stdio.h>

/**
* *_strpbrk - Recherche un caractère dans une chaîne
* @s: all lowercase letters
* @accept: Pointeur vers la chaîne de caractères
* Return: Un pointeur vers le premier caractère de @s
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	char *a = accept;
		while (*a)
	{
		if (*s == *a)
		return (s);
		a++;
		}
	s++;
	}
	return (NULL);
	}
