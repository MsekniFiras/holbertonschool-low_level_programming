#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
* _strlen - finds length of a string.
* @str: string.
* Return: length.
*/
int _strlen(char *str)
{
int l = 0;
while (*str++)
l++;
return (l);
}
/**
* _strcopy - copies a string.
* @dest: buffer storing string copy.
* @src: source string.
* Return: pointer to dest.
*/
char *_strcopy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
* new_dog - creates a new dog.
* @name: its name.
* @age: its age.
* @owner: its owner.
* Return: dog's info.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
return (NULL);
doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggy->name == NULL)
{
free(doggy);
return (NULL);
}
doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggy->owner == NULL)
{
free(doggy->name);
free(doggy);
return (NULL);
}
doggy->name = _strcopy(doggy->name, name);
doggy->age = age;
doggy->owner = _strcopy(doggy->owner, owner);
return (doggy);
}
