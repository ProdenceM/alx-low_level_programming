#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entri point
 *Discription: 'Check for number if it is positive or negative'
 *Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is posotive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is ozero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
