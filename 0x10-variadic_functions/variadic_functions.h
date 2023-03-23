#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
oid print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTION_H_*/
