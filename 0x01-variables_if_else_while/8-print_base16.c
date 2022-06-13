#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char n;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (n = 'a'; n <= 'f'; n++)
	{	putchar(n);
	}
		putchar('\n');

	return (0);
}
