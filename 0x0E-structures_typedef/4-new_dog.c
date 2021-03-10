#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - function returns the length of a string
 * @s: pointer
 * Return: the length of a string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
return (i);
}
/**
 *_strcpy - function that copies string
 *@dest: pointer
 *@src: pointer
 * Return: *dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];
return (dest);
}

/**
 * new_dog - create new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	len1 = _strlen(name);
	len2 = _strlen(owner);
	if (name == NULL)
	{
		dog->name = NULL;
	}
	else
	{
		dog->name = malloc(len1);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
	}
	if (owner == NULL)
	{
		dog->owner = NULL;
	}
	else
	{
		dog->owner = malloc(len2);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->owner = _strcpy(dog->owner, owner);

	}
	dog->age = age;
	return (dog);
}
