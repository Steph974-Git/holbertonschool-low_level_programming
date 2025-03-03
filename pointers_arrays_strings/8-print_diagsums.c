#include "main.h"
#include <stdio.h>

/**
* print_diagsum - prints the sum of the two diagonals of a square matrix of integers
* @resu1: Somme 1
* @resu2: somme 2
* Return: aucun
*/

void print_diagsums(int *a, int size)

{   
    int i = 0;
    unsigned resu1 = 0, resu2 = 0;

    for (i = 0; i < size; i++)
    {
        resu1 += a[i * size + i];
        resu2 += a[i * size + (size -i - 1)];
    }
    printf("%u\n", resu1);
    printf("%u\n", resu2);
}
