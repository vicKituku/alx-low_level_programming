#include "main.h"
/**
 * _abs - get the absolute value of an integer
 * @n: int type number
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
