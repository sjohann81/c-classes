#include <stdio.h>
#include <string.h>
#include "animal.h"

void animal_eat(struct animal_s const *animal)
{
	(*animal->vptr->eat)(animal);
}

void animal_noise(struct animal_s const *animal)
{
	(*animal->vptr->noise)(animal);
}

void animal_name(struct animal_s *animal)
{
	printf("%s\n", animal->name);
}

void animal_ctor(struct animal_s *animal, char *name)
{
	static struct animal_vtab_s const vtbl = {&animal_eat, &animal_noise};
	animal->vptr = &vtbl;
	strcpy(animal->name, name);
}
