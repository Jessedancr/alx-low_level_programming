#include <stdlib.h>                                                                                                                     
#include <time.h>                                                                                                                       
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;
	if(lastnum > 5)
		printf("last digit of %d is %d an =d is greater than 5\n",n , lastnum);
	else if(lastnum ==0)
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum;
	return (0);
}
