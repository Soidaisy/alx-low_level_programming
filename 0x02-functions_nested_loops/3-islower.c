#include "main.h"
/**
 * _islower - checks the code if it is a lower case
 * @c: THe character is ASCII code
 * Return: always 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
