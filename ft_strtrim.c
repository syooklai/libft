/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 01:27:13 by syooklai          #+#    #+#             */
/*   Updated: 2024/09/12 01:27:33 by syooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *s2)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!s2)
		return (ft_strdup(s1));
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (s1[start] && ft_strchr(s2, s1[start]))
		++start;
	while (s1[start] && ft_strchr(s2, s1[end]))
		--end;
	return (ft_substr(s1, start, ((end - start) + 1)));
}
