#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Add two numbers
 * Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

*(p + 5) = 98;

printf("a[2] = 98");
return (0);
}
