#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: the value last digit
 * Return:  the absolute value
 */

int print_last_digit(int n)

{
	int last_digit = n % 10;

	if (last_digit < 0)
	last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
