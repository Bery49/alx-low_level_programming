#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: returns length
 */
int _strlen(char *s);
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return length;
}
