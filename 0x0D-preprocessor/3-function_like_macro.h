#include <stdlib.h>
#include <stdio.h>
/**main - functionlike macros
 * Return: always a success
 */
#ifndef ABS(x)
#define ABS(x) (((x) < (0)) ? ((x) * (-1)) : (x))
#endif
