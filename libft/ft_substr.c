/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkanmado <rkanmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:49:02 by segarcia          #+#    #+#             */
/*   Updated: 2023/02/07 02:26:25 by rkanmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strlen;
	size_t	rlen;
	char	*str;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	rlen = len;
	if (len > strlen)
		rlen = strlen;
	str = (char *)malloc(sizeof(char) * (rlen + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < strlen && s[start + i] && i < rlen)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
