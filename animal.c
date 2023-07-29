#include <stdio.h>
#include <string.h>
#include "animal.h"

void animal_eat(void *animal)
{
	struct animal_s const *animal_p = animal;
	
	(*animal_p->vptr->eat)(animal);
}

void animal_noise(void *animal)
{
	struct animal_s const *animal_p = animal;
	
	(*animal_p->vptr->noise)(animal);
}

void animal_name(void *animal)
{
	struct animal_s const *animal_p = animal;
	
	printf("%s\n", animal_p->name);
}

void animal_ctor(struct animal_s *animal, char *name)
{
	static struct animal_vtab_s const vtbl = {&animal_eat, &animal_noise};
	animal->vptr = &vtbl;
	strcpy(animal->name, name);
}
