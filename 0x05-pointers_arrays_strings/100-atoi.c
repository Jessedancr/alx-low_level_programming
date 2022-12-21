#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: pointer to a character string
 * Return: void
 */
int _atoi(char *s)
{
	int sign = 1;

	unsigned int num = 0;

	char *temp;

	temp = s;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++
	}
	if (*temp != '\0')
	{
		do{
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >='0' && *temp <= '9');
	}return (num * sign);
}
