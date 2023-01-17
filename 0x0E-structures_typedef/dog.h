#ifndef dogy
#define dogy
/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Description: to hold dog identification details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
