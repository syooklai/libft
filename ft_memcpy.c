#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    /* declaring both our temporary pointers */
    unsigned char    *tmp_dst;
    unsigned char    *tmp_src;
    
    /* if both dst and src are NULL pointers we can directly return
     * dst since we won't do anything on it
     */
    if (dst == (void *)0 && src == (void *)0)
        return (dst);
    /* assigning both our temporary pointers to the converted
     * values of the "real" pointers
     */
    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;
    /* looping on both our temporary pointer until we reach 
     * n bytes
     */
    while (n > 0)
    {
        /* making current byte of tmp_dst = current byte of
         * tmp_src 
         */
        *(tmp_dst++) = *(tmp_src++);
        /* reducing n by one so we only copy n bytes */
        n--;
    }
    /* returning original dst, not our temporary pointer */
    return (dst);
}