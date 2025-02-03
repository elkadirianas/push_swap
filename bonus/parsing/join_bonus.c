/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:14:22 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 15:14:25 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

char	*ft_strjoinn(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	str = (char *)malloc(len + 2);
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = *(s1++);
	str[i++] = ' ';
	while (*s2)
		str[i++] = *(s2++);
	str[i] = '\0';
	return (str);
}
