#include <stdio.h>
#include <string.h>
#include "animal.h"
#include "cat.h"

void cat_food()
{
	printf("cat food\n");
}

void cat_meow()
{
	printf("meeoww!\n");
}

int cat_age(struct cat_s *cato)
{
	return cato->age;
}

int cat_weight(struct cat_s *cato)
{
	return cato->weight;
}

/* Cat constructor */
void cat_ctor(struct cat_s *cato, char *name, int age, int weight)
{
	/* call superclass constructor */
	animal_ctor(&cato->animal, name);
	
	/* initialize subclass attributes / virtual functions */
	static struct animal_vtab_s const vtbl = {&cat_food, cat_meow};
	cato->animal.vptr = &vtbl;
	cato->age = age;
	cato->weight = weight;
}
