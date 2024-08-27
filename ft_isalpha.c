#include "libft.h"
int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1024);
    return(0);
} 
// int main(void)
// {
//     // printf("%d\n",ft_isalpha(65));
//     // printf("%d\n",ft_isalpha(104));
//     // printf("%d\n",ft_isalpha('z'));
//     // printf("%d\n",ft_isalpha(' '));
//     // printf("%d\n",ft_isalpha('%'));
//     // printf("%d\n",ft_isalpha('A'));
//     printf("%d\n",ft_isalpha(65));
//     printf("%d\n",ft_isalpha(104));
//     printf("%d\n",ft_isalpha('z'));
//     printf("%d\n",ft_isalpha(' '));
//     printf("%d\n",ft_isalpha('%'));
//     printf("%d\n",ft_isalpha('A'));
//     return (0);
// }