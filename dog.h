/* Dog subclass: attributes and methods
 * Inheritance from Animal superclass
 * dog_food() and dog_bark() are virtual (polymorphism)
 */
struct dog_s {
	struct animal_s animal;
	int age;
	int weight;
};

void dog_food();
void dog_bark();
int dog_age(struct dog_s *dogo);
int dog_weight(struct dog_s *dogo);
void dog_ctor(struct dog_s *dogo, char *name, int age, int weight);
