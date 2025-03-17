#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: Name to be printed
 * @f: Function pointer that will print the name
 * Return: return name
 */

void print_name(char *name, void (*f)(char *))
{

	if (f != NULL && name != NULL)
		f(name);

}
