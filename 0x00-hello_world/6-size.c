#include <stdio.h>

/**
 * main - Prints the size of various typesa based on
 * the computer it is compiled and run on..
 *
 * Return: Always (0)
 */
int main(void)
{
printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of long int: %lu bytes\n", sizeof(long int));
printf("Size of long long int: %lu bytes\n", sizeof(long long int));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of long double: %lu bytes\n", sizeof(long double));
return (0);
}
