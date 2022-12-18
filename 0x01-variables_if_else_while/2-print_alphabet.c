#include <stdio.h>
/**
 * main - prints the english alphabets in lower case
 * Description: Prints lower case letters
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
