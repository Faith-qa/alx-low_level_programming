#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure definition of a dog
 *@name: character string
 *@age: integer
 *@owner: character string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char*src);
int _strlen(char *s);

#endif
