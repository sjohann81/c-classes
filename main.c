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
	printf("name: "); animal_name((struct animal_s *)&dogo);
	printf("age: %d\n", dog_age(&dogo));
	printf("weight: %d\n", dog_weight(&dogo));
	animal_eat((struct animal_s *)&dogo);
	animal_noise((struct animal_s *)&dogo);
	
	cat_ctor(&cato, "miu", 2, 4);
	printf("name: "); animal_name((struct animal_s *)&cato);
	printf("age: %d\n", cat_age(&cato));
	printf("weight: %d\n", cat_weight(&cato));
	animal_eat((struct animal_s *)&cato);
	animal_noise((struct animal_s *)&cato);

	return 0;
}
