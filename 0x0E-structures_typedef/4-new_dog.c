#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpname, *cpowner;
	int lenname, lenowner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	lenname = _strlen(name);
	lenowner = _strlen(owner);
	cpname = malloc(sizeof(char) * lenname + 1);
	if (cpname == NULL)
	{
		free(cpname);
		free(new_dog);
		return (NULL);
	}
	cpname = _strcpy(cpname, name);
	cpowner = malloc(sizeof(char) * lenowner + 1);
	if (cpowner == NULL)
	{
		free(cpowner);
		free(cpname);
		free(new_dog);
		return (NULL);
	}
	cpowner = _strcpy(cpowner, owner);
	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;
	return (new_dog);
}
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(char *s)
{
	int a;
	int len;

	for (a = 0; s[a] != '\0'; a++)
	{
		len++;
	}
	return (a);
}
/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
