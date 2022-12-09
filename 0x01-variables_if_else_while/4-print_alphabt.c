#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
char character;
character = 'a';
while (character <= 'z')
{
if (character != 'q' && character != 'e')
{
putchar(character);
}
character++;
}
putchar('\n');
return (0);
}
