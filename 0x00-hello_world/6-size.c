#include <stdio.h>
/**
* main - Program that prints the size of various computer types
*
* Return :0 (success) 
*/
int main(void)
{ 
printf("Size of a char:%lu1byte(s)\n",sizeof(char));
printf("size of an int:%lu byte(s)\n", sizeof(int));
printf("size of a long int:%lu bytes(s)\n", sizeof(long int));
printf("size of a long long int:%lu8byte(s)\n",sizeof(long long int));
printf("Size of a float:%lu4bytes(s) \n",sizeof(float));
return (0);
}  

