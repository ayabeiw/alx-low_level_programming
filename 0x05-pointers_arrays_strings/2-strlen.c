#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */

int _strlen(const char *str)
{
int length = 0;

while (*str++)
length++;

return (length);
}
