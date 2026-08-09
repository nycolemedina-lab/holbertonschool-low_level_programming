#ifndef DOG_H
#define DOG_H



/**
* struct dog - a dogs basic info
* @name: first member (string)
* @age: second member (float)
* @owner: third member (string)
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
