#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always 0 (succes)
 */


int main(void)

{

	char low
		;
	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
	}

	return (0);
}
