#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= 9))
        return(8);
    return(0);
}
//int main (void)
// {
////      printf("%d\n", isalnum(65));
////      printf("%d\n", isalnum(104));
////      printf("%d\n", isalnum('z'));
////      printf("%d\n", isalnum(' '));
////      printf("%d\n", isalnum('%'));
////      printf("%d\n", isalnum('A'));
////      printf("%d\n", isalnum('/'));
//     printf("%d\n", ft_isalnum(65));
//     printf("%d\n", ft_isalnum(104));
//     printf("%d\n", ft_isalnum('z'));
//     printf("%d\n", ft_isalnum(' '));
//     printf("%d\n", ft_isalnum('%'));
//     printf("%d\n", ft_isalnum('A'));
//     printf("%d\n", ft_isalnum('/'));
//    return(0);
//}