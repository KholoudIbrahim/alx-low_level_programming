#ifndef DOG_D_H
#define DOG_D_H
/*the struct*/
/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: just a lone dog struct in a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*the functions*/
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
