#include "main.h"

/**
 * _isupper - uppercase letters
 * 0c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if  (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}	

