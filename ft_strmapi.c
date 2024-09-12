/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 03:01:20 by syooklai          #+#    #+#             */
/*   Updated: 2024/09/12 03:01:23 by syooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ss;

	ss = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ss)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ss[i] = (*f)(i, s[i]);
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
