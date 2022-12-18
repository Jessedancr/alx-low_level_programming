#include <stdio.h>
/**
 * main - print if the number is positive negative or sero
 * Description: using the mai function
 * this program prints blah blah blha
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}
