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
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	if (num == 57)
	{
		break;
	}
	putchar(' ');
	putchar (' ');
	}

	putchar('\n');
	return (0);
}
