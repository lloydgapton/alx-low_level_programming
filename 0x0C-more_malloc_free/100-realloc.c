#include <stdlib.h>
#include "main.h"
/**
 *  * _realloc - reallocates a memory block using malloc and free
 *   * @ptr: pointer to the memory previously allocated
 *    * @old_size: size, in bytes, of the allocated space for ptr
 *     * @new_size: new size, in bytes, of the new memory block
 *      * Return: pointer to the new memory block, or NULL if it fails
 *       */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	    void *new_ptr;
	        unsigned int i, min_size;

		    /* If new_size == old_size do not do anything and return ptr */
		    if (new_size == old_size)
			            return (ptr);

		        /* If ptr is NULL, then the call is equivalent to malloc(new_size) */
		        if (ptr == NULL)
				        return (malloc(new_size));

			    /* If new_size is equal to zero, and ptr is not NULL,
			     *        then the call is equivalent to free(ptr). Return NULL */
			    if (new_size == 0)
				        {
						        free(ptr);
							        return (NULL);
								    }

			        /* Allocate memory for the new block */
			        new_ptr = malloc(new_size);
				    if (new_ptr == NULL)
					            return (NULL);

				        /* Copy the contents from the old block to the new block */
				        min_size = old_size < new_size ? old_size : new_size;
					    for (i = 0; i < min_size; i++)
						            ((char *)new_ptr)[i] = ((char *)ptr)[i];

					        /* Free the old block */
					        free(ptr);

						    /* Return the pointer to the new block */
						    return (new_ptr);
}

