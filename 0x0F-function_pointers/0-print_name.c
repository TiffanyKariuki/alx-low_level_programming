#include "main.h"
#include <stdio.h>

/**
 * main -function that prints a name
 * @name: name to print
 * @f: function to print with
 * Return: always 0
 */

void print_name(char *name, void (*f)(char *));

{
	if (name != NULL && f != NULL)

	f(name);
}
