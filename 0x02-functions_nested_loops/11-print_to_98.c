#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - outputs all natural number from 0 - 98 followed by new line
 * @n: outputs from the number
 */
void print_to_98(int n)
{
int i, j;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\n", i);
}
}
else if (n >= 98)
{
for (j = n; j >= 98; j--)
{
if (j != 98)
printf("%d, ", j);
else if (j == 98)
printf("%d\n", j);
}
}
}
