#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
char ch;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
ch = 'a';
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
