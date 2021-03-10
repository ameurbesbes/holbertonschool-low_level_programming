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
 * new_dog - create new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2, i, j;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog->name = malloc(len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	for (j = 0; j <= len2; j++)
	{
		dog->owner[j] = owner[j];
	}
	dog->owner[j] = '\0';
	dog->age = age;
	return (dog);
}
