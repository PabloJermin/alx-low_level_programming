/** struct dog : a definition for struct 
 */
#include "dog.h"
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};
