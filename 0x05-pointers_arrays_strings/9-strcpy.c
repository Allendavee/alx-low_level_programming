#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src
 * @dest: First pointer to char
 * @src: Second pointer to char
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char ans;

	*dest = *src;
	ans = *dest;

	return (ans);
}
