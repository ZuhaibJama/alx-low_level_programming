#include "main.h"

/**
 * main - print_alphabet
 * Return: 0
 */

void print_alphabet(void)
{
        char c;
	char i;

	for(i = 0; i < 10; i++)
        {
		 for (c = 'a'; c <= 'z'; c++)
		 {
			 _putchar(c);

		 
		 } 
                
        }
        _putchar('\n');

}
