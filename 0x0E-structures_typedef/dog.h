#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - caracteristicas description
 *@name : character
 *@age : float
 *@owner: character
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
