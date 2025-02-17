#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: Always (Success)
 */

	int main(void)
{
	int number = 0;

	while (number < 10)
{
	putchar(number + '0');
	if (number < 9)
{
	putchar(',');
	putchar(' ');
}
	number++;
}
	putchar('\n');

	return (0);
}
