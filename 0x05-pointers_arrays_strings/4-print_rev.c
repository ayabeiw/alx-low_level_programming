#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

int begin, end, count = 0;

while (s[count] != '\0')
count++;

end = count - 1;

for (begin = 0; begin < count; begin++) {
r[begin] = s[end];
end--;
}

r[begin] = '\0';

printf("%s\n", r);

return 0;
}
