#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    /* declaring our temporary pointer */
    char    *tmp_ptr;
    
    /* making our temporary pointer equal to b converted to char * */
    tmp_ptr = (char *) s;
    /* looping on our temporary pointer while we didn't reach n */
    while (n > 0)
    {
        /* assigning 0 to the current byte in our temporary pointer */
        *(tmp_ptr++) = 0;
        /* reducing the n by one so we only set n bytes to 0 */
         n--;
    }
}