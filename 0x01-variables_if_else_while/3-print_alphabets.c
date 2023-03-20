#include <time.h>
/**
 * main - A program that prints the alphabet in lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z' ; low++)
		putchar(low);

	for (low = 'A' ; low <= 'Z' ; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
