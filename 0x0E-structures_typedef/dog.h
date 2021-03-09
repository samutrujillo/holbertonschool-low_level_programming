#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - check the code for Holberton School Student
 *@name: the name
 *@age: the age
 *@owner: the owner
 */

typedef struct dog
{

	char *name;

	float age;

	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
