#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string s
 */

{
int len = 0, index = 0;
char tmp;

while (s[index++])
len++;

for (index = len - 1; index >= len / 2; index--)
{
tmp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = tmp;
}
}
