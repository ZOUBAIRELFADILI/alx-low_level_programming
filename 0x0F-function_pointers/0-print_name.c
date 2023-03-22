#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer that takes a char pointer as argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
