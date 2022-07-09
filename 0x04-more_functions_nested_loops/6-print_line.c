#include "main.h"

/**
 * ptint_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int ro;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 1; ro <= n; ro++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
