#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int ro, ds;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 1; ro <= n; ro++)
		{
			for (ds = 1; ds < ro; ds++)
			{
				_putchar('\n');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
