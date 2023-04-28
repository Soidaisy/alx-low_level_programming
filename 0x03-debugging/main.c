#include "main.h"

/**
*positive _or_negative function that prints if integer is positive or negative
*@i:number to work on
* Return: 0
*/
void positive_or_negative(int i)
{
if (i>0)
printf("%d is positive\n",i)
else if (i<0)
printf("%d is negative\n",i);
else
printf("%d is zero\n",i)
}
