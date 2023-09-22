#include "main.h"
/**
 *  string_toupper - change all lowercase to uppercase
 *  @str: pointer
 *  Return: str
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= 'i')
		str[index] -= 32;
		index++;
	}
	return (str);
}
