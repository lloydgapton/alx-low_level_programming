#include "main.h"
#include <stdlib.h>

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

			    /* If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL */
			    if (new_size == 0)
				        {
						        free(ptr);
							        return (NULL);
								    }

			        /* Allocate new memory block with new_size */
			        new_ptr = malloc(new_size);
				    if (new_ptr == NULL)
					            exit(98);

				        /* Copy the contents from ptr to new_ptr */
				        min_size = old_size < new_size ? old_size : new_size;
					    for (i = 0; i < min_size; i++)
						            ((char *)new_ptr)[i] = ((char *)ptr)[i];

					        /* Free the old memory block */
					        free(ptr);

						    /* Return the pointer to the new memory block */
						    return (new_ptr);
}

