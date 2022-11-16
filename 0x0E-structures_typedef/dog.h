/** struct dog : a definition for struct 
 */
#ifndef dog
#define dog
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /*struct dog*/
