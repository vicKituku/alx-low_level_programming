#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
