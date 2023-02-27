#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @destination: char type string
 * @source: char type string
 * Description: Copy the string pointed to by pointer source to
 * the buffer pointed to by destination
 * Return: Pointer to destination
 */

char *_strcpy(char *destination, char *source)
{
	int i = -1;

	do {
		i++;
		destination[i] = source[i];
	} while (source[i] != '\0');

	return (destination);
}
