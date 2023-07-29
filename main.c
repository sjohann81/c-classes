#include <stdio.h>
#include <string.h>
#include "animal.h"
#include "dog.h"
#include "cat.h"

int main(void)
{
	struct dog_s dogo;
	struct cat_s cato;
	
	dog_ctor(&dogo, "harold", 3, 25);
	printf("name: "); animal_name(&dogo);
	printf("age: %d\n", dog_age(&dogo));
	printf("weight: %d\n", dog_weight(&dogo));
	animal_eat(&dogo);
	animal_noise(&dogo);
	
	cat_ctor(&cato, "miu", 2, 4);
	printf("name: "); animal_name(&cato);
	printf("age: %d\n", cat_age(&cato));
	printf("weight: %d\n", cat_weight(&cato));
	animal_eat(&cato);
	animal_noise(&cato);

	return 0;
}
