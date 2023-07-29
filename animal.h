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
void animal_eat(void *animal);
void animal_noise(void *animal);
void animal_name(void *animal);
void animal_ctor(struct animal_s *animal, char *name);
