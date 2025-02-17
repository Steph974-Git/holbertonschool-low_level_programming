#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print  the number stored in the variable n
 *
 * Return: Always (Success)
 */

	int main(void)
{
	int n;
	int last_digit_of;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is ", n);
	last_digit_of = n % 10;

	if (last_digit_of > 5)
	{
		printf("%d and is greater than 5\n", last_digit_of);
	}

	else if (last_digit_of == 0)
	{
		printf("%d and is 0\n", last_digit_of);
	}

	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit_of);
	}

	return (0);
}
