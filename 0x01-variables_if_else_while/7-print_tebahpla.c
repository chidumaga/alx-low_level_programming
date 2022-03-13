#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-entery point
 *
 * Return: Return: Always(sucess/correct)
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
