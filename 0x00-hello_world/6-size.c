#include <stdio.h>

/**
 * main - prints the size of various types on 
 * the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
printf("Size of a char: %zu 1 byte(s)\n", sizeof(char));
printf("Size of an int: %zu 4 byte(s)\n", sizeof(int));
printf("Size of an long int: %zu 8 byte(s)\n", sizeof(long int));
printf("Size of an long long int: %zu 8 byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu 4 byte(s)\n", sizeof(float));
 return (0);
}
