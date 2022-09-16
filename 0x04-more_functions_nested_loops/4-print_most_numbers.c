#include "main.h"

/**
 * print_most_numbers - prints number
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 )
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
