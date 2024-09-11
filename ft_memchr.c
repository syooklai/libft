#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    unsigned char uc;
    
    /* converting both s and c to unsigned char */
    str = (unsigned char *) s;
    uc = (unsigned char) c;
    i = 0;
    /* looping over n bytes */
    while (i < n)
    {
        /* same check as strchr */
        if (str[i] == uc)
            /* there, we return a void pointer instead
             * of the char pointer we returned in strchr
             */
            return ((void *) &str[i]);
        i++;
    }
    /* if we reached this point, we didn't find any occurence
     * of c in n bytes, so we return NULL
     */
    return (NULL);
}