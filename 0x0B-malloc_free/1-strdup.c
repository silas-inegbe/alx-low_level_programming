#include "main.h"
#include <stdlib.h>

/**
 * _strdup -function returns a pointer to a new string which is a duplicate of the string str
 * @str: string
 *
 * Return: pointer on success or Null if not
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
