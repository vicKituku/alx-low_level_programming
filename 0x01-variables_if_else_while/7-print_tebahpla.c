#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
char character;
character = 'z';
while (character >= 'a')
{
putchar(character);
character--;
}
putchar('\n');
return (0);
}
