#include "main.h"
/**
 * rev_sr=tring - reverses a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++
	}
	k = 0;
	j = i - 1;
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
