#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    src_len;
    
    /* getting the length of src with our ft_strlen function */
    src_len = ft_strlen(src);
    /* checking if dstsize is big enough to accomodate src_len plus
     * the terminating NUL character
     */
    if (src_len + 1 < dstsize)
        /* using ft_memcpy to copy the source into the destination */
        ft_memcpy(dst, src, src_len + 1);
    /* if dstsize is not big enough, we have to truncate the string
     * when copying it
     * note that we also check if dstsize is 0, if that is the case
     * we don't have to copy anything, so we just skip this part by
     * not entering the condition
     */
    else if (dstsize != 0)
    {
        /* we also use ft_memcpy, but instead of giving it
         * src_len + 1 as a maxsize, we give it dstsize - 1
         */
        ft_memcpy(dst, src, dstsize - 1);
        /* we then NUL-terminate the string */
        dst[dstsize - 1] = 0;
    }
    /* finally, we return the original length of the src */
    return (src_len);
}