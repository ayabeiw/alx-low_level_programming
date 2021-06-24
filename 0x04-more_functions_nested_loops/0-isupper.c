#include "holberton.h"

/**
 * _islower - Check For Lower case character
 *@c: letter o be checked for
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >=  065 && c <= 090)
return (1);
else
return (0);
}
