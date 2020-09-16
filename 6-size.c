#include <stdio.h>
main(void)
{
int integerType;
char charType;
long int longintegerType;
long long int longlongintegerType;
float floatType;
printf("Size of int: %ld byte(s)\n", sizeof(integerType));
printf("Size of char: %ld byte(s)\n", sizeof(charType));
printf("Size of long int: %ld byte(s)\n", sizeof(longintegerType));
printf("Size of long long int: %ld byte(s)\n", sizeof(longlongintegerType));
printf("Size of float: %ld byte(S)\n", sizeof(floatType));
return (0);
}
