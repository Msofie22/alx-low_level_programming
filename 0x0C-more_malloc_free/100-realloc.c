#include <stdlib.h>
#include "main.h"

/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: pointer to the memory block using malloc and free
*@old_size: size of the  allocated memory for ptr
*@new_size: new size of the new memory block
*Return: pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr = NULL;
char *char_ptr = NULL;
char *char_old_ptr = NULL;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
char_ptr = (char *)new_ptr;
char_old_ptr = (char *)ptr;
for (i = 0; i < old_size && i < new_size; i++)
char_ptr[i] = char_old_ptr[i];
free(ptr);
return (new_ptr);
}
