/* Cat subclass: attributes and methods
 * Inheritance from Animal superclass
 * cat_food() and cat_meow() are virtual (polymorphism)
 */
struct cat_s {
	struct animal_s animal;
	int age;
	int weight;
};

void cat_food(struct cat_s const *cato);
void cat_meow(struct cat_s const *cato);
int cat_age(struct cat_s *cato);
int cat_weight(struct cat_s *cato);
void cat_ctor(struct cat_s *cato, char *name, int age, int weight);
