#include "main.h"
/**
 * main - Entry point
 * Return: 0
 */
/**
 * print_alphabet - prints the alphabet
 * Return: 0
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
	putchar(ch);
}
}
int main(void)
{
print_alphabet();
return (0);
}
