#include "main.h"
#include <stdio.h>

/**
 * _strlen - Finds the length of a string.
 * @str: String pointer to the string whose length is to be found * Return: returns the length of @str.
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
