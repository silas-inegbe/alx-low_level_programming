#include <stdio.h>
#include <unistd.h>
/**
 * main- Prints all single digits of base 10 from 0
 * Retun : 0
 */
int main(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	printf('\n');

	return (0);
}

