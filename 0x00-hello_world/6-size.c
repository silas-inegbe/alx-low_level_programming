#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char:1 %i byte(s)\n", sizeof(char));
	printf("Size of an int:4 %d byte(s)\n", sizeof(int));
	printf("Size of a long int:4 %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int:8 %i byte(s)\n", sizeof(long long int));
	printf("Size of a float:4 %i byte(s)\n", sizeof(float));
	return (0);
}

