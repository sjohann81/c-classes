#include <stdio.h>
#include <string.h>
#include "animal.h"
#include "dog.h"

/* private methods */
static void dog_food(struct dog_s const *dogo);
static void dog_bark(struct dog_s const *dogo);

static void dog_food(struct dog_s const *dogo)
{
	printf("[%s] eats dog food\n", dogo->animal.name);
}

static void dog_bark(struct dog_s const *dogo)
{
	printf("[%s] says wooof!\n", dogo->animal.name);
}

/* public methods */
int dog_age(struct dog_s *dogo)
{
	return dogo->age;
}

int dog_weight(struct dog_s *dogo)
{
	return dogo->weight;
}

/* Dog constructor */
void dog_ctor(struct dog_s *dogo, char *name, int age, int weight)
{
	/* call superclass constructor */
	animal_ctor(&dogo->animal, name);
	
	/* initialize subclass attributes / virtual functions */
	static struct animal_vtab_s const vtbl = {&dog_food, &dog_bark};
	dogo->animal.vptr = &vtbl;
	dogo->age = age;
	dogo->weight = weight;
}
