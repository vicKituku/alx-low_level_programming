#include "main.h"
/**
 * _isalpha - return 1 if character is a letter and 0 otherwise
 * @c: type int character
 * Return: return 1 if character is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
