#include "main.h"
/**
 * _isupper-check if character is uppercase.
 * @c:character to check if it isuppercase.
 * Return:0-if uppercase,1-if not.
 */



int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
