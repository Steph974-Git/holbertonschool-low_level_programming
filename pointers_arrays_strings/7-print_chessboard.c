#include "main.h"
#include <stdio.h>

/**
* print_chessboard -   prints the chessboard.
* @a: is chessboard
* Return: aucun
*/

void print_chessboard(char (*a)[8])

{
	int hori;
	int vert;

	for (hori = 0; hori < 8; hori++)
	{
	for (vert = 0; vert < 8; vert++)
	{
		_putchar(a[hori][vert]);
	}
	_putchar('\n');
}
}
