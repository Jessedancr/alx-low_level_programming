#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - i))
			printf(",");
	}
	printf("\n");
}