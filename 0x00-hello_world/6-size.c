#include <stdio.h>
main(void)
/**
* main - Entry point
* Return: Always 0 (Success)
*/
{
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of long int: %ld byte(s)\n", sizeof(long int));
printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
