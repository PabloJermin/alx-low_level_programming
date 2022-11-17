#include <stdlib.h>
#include <stdio.h>
/**
 * dog: a definition for struct
 *
 */
#ifndef _STRUCT_DOG_H
#define _STRUCT_DOG_H
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
