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
putchar(character);
character++;
}
character = 'A';
while (character <= 'Z')
{
putchar(character);
character++;
}
putchar('\n');
return (0);
}
