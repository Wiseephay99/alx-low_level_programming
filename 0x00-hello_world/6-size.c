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
Example Output:
Size of char: 1 bytes
Size of int: 4 bytes
Size of long int: 8 bytes
Size of long long int: 8 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long double: 16 bytes
