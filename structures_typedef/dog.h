#ifndef DOG_H
#define DOG_H



/**
* struct dog - a dogs basic info
* @name: first member (string)
* @age: second member (float)
* @owner: third member (string)
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
