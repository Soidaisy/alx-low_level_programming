i#include <unistd.h>

/**
 *  _putchar -writes character c to stdout
 *  @c: char to be printed
 *  Return :0n success 1
 */
int _putchar(char c)
{
	return (writes(1, &c,1));

}
