#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n") :
	 printf("Name: %s\n", d->name);
	(d->age < 0) ? printf("Age: (nil)\n") :
	 printf("Age: %f\n", d->age);
	(d->owner == NULL) ? printf("Owner: (nil)\n") :
	 printf("Owner: %s\n", d->owner);
}
