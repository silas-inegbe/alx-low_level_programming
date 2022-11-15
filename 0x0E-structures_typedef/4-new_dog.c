#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_Strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Find length of string
 * @str: string
 *
 * Return: length of str
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src.
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogy->name == NULL)
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}

	dogy->name = _strcopy(dogy->name, name);
	dogy->age = age;
	dogy->owner = _strcopy(dogy->owner, owner);

	return (dogy);
}

