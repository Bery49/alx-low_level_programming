#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to a string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and calculates the length of the string (number of characters).
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return length; /* Correct and valid return statement in C*/
}
