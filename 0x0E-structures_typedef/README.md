Define a new type struct dog with the following elements:

* name, type = char *
* age, type = float
* owner, type = char *

Solutions: dog.h

#include <stdio.h>
#include "dog.h"

/**
* main - check the code for ALX
*
* Return: Always 0.
*/
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Django";
	my_dog.age = 3.5;
	my_dog.owner = "Jay";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name,
	return (o);
}
