/**
 * dog: a definition for struct
 */
#ifndef __dog.h__
#define __dog.h__
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
