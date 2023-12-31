#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to a string.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
