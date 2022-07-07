#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: name
 * @age: age
 * @owner: owner
 * dog_t - typedef for struct gog
 * Description: this stuct is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void struct_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
