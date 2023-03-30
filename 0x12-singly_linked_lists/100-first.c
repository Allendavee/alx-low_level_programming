#include <stdio.h>

/**
 * before_main - Function to be executed before main
 * __attribute__ - prints You're beat! and yet, you must allow,
 * I bore my house upon my back!
 * before the main function is executed
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
