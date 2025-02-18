#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 *
 * Return: Always (Success)
 */

void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num < 10; num++)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar(alph);
}
	_putchar('\n');
}
}
