#include <stdio.h>
/**
 * main - A program that prints exactly with proper grammare,.
 *Return: 0 (sccess)
 */
int main(void)
{
	long long int a;

	printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
