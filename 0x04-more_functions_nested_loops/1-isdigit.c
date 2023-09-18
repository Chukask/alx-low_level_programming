#include "main.h"

/**
 * _isdigit - check if number are 0 - 9
 * 0c: char to be checked
 *
 * Retur: 0 0r 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}	


