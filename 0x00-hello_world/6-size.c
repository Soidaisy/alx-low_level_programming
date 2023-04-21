#include <stdio.h>
/**
* main - Program that prints the size of various computer types
*
* Return :0 (success) 
*/
int main(void)
{ 
printf("Size of a char :%lu byte(s)\n", Sizeof(char));
printf("size of an int :%lu byte(s)\n",  Sizeof(int));
printf("size of a long int :%lu bytes(s)\n", Sizeof(long int));
printf("size of a long long int:%lu byte(s)\n", Sizeof(long long int));
printf("Size of a float:%lu bytes(s)\n", Sizeof(float));
return (0);
}  

