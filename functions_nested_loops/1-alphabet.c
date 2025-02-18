#include "main.h"
#include <stdio.h>

/**
 * main -  prints the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
	putchar('\n');
}
