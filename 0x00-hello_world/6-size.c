#include <stdio.h>
/**
* main - Program that prints the size of various computer types
*
* Return :0 (success) 
*/
int main(void)
{ 
printf("Size of a char: %lu 1  byte(s)\n",sizeof(char));
printf("size of an int: %lu 4  byte(s)\n", sizeof(int));
printf("size of a long int: %lu 4  bytes(s)\n", sizeof(long int));
printf("size of a long long int: %lu 8 byte(s)\n",sizeof(long long int));
printf("Size of a float:%lu 4 bytes(s) \n",sizeof(float));
return (0);
}  

