#include <stdio.h>

/**
 * main - printing alphabets
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
