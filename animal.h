/* Animal superclass: attributes and methods */
struct animal_s {
	struct animal_vtab_s const *vptr;
	char name[30];
};

/* animal_eat() and animal_noise() are virtual methods */
struct animal_vtab_s {
	void (*eat)();
	void (*noise)();
};

/* public methods */
void animal_eat(struct animal_s const *animal);
void animal_noise(struct animal_s const *animal);
void animal_name(struct animal_s *animal);
void animal_ctor(struct animal_s *animal, char *name);
