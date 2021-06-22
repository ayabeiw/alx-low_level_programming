#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - Print Holberton
 *
 * Return: Always 0 (Success)
 */

int main () {
char ch;

for(ch = 97 ; ch <= 122 ; ch++) {
_putchar(ch);
}

_putchar('\n');
return(0);
}
