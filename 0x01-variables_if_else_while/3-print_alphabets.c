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
	char lower_case;
	char upper_case;

	for (upper_case = 'a'; upper_case <= 'z'; upper_case++)
	{
		putchar(lower_case);
	}
	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}

	putchar('\n');
	return (0);
}
