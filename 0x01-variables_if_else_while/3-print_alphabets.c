#include <stdio.h>
/**
 *main - Entry point
 *Discription: 'print alphabets in lower case and uppercase'
 *Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 60;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
