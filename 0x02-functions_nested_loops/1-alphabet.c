#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
void print_alphabet(void)
{
	char c = 'a' ;

	for ( c <= 'z'; c++)
	{
		_putchar(c);
		c++;


	}
	putchar('\n');
	
}
