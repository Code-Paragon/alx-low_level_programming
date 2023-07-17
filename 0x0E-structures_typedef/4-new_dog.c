#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 * @owner: char *
 * @name: char*
 * @age: int
 *
 * Return: char *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));
	newdog->name = name;
	newdog->age = age;
	newdog->owner= owner;
	return (newdog);
}
