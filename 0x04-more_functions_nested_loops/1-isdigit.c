#include "main.h"
/**
 * _isdigit-check if character is a digit.
 * @c:character to check if it is a digit.
 * Return:0-if digit,1-if not.
 */



int _isdigit(char c)
{
	if (atoi(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
