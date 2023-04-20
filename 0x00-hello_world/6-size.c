
#include <stdio.h>
/**
* main - Program that prints the size of various computer types
* Return :0 (success) 
*/
int main(void)
{ 
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char : %lu 1 byte(s)\n",(unasigned long)
sizeof(a));
printf("size of an int: %lu byte(s)\n" ,(unsigned long)sizeof(b));
printf("size of a long int: %lu bytes(s)\n",(unsigned long) sizeof(c));
printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s) \n",(unsigned long) sizeof(f));
return (0);
}  
