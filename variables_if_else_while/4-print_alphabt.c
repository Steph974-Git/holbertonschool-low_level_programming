#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */

	int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	if (alphabet != 'q' && alphabet != 'e')

{
	putchar(alphabet);
}
	putchar('\n');
	return (0);
}
