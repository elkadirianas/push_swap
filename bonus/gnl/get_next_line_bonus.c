/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:02:09 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 15:02:16 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static char	*ft_read(int fd, char *buff, char *stored)
{
	char	*stored_updated;
	int		j;

	while (1)
	{
		if (ft_strchr(stored, '\n'))
			break ;
		j = read(fd, buff, BUFFER_SIZE);
		if (j < 0)
		{
			free(stored);
			return (NULL);
		}
		if (j == 0)
			return (stored);
		buff[j] = '\0';
		stored_updated = ft_strjoin(stored, buff);
		free(stored);
		if (!stored_updated)
			return (NULL);
		stored = stored_updated;
	}
	return (stored);
}

static char	*extract_line(char *stored)
{
	char	*line;
	int		len;

	if (!stored)
		return (NULL);
	len = 0;
	while (stored[len] && stored[len] != '\n')
		len++;
	line = ft_substr(stored, 0, len + 1);
	return (line);
}

static char	*update_stored(char *stored)
{
	char	*stored_updated;
	int		len;

	if (!stored)
		return (NULL);
	len = 0;
	while (stored[len] && stored[len] != '\n')
		len++;
	if (stored[len] == '\n')
		len++;
	stored_updated = ft_strdup(&stored[len]);
	free(stored);
	if (stored_updated && stored_updated[0] == '\0')
	{
		free(stored_updated);
		return (NULL);
	}
	return (stored_updated);
}

char	*get_next_line(int fd)
{
	static char	*stored;
	char		*line;
	char		*buff;

	if (fd > OPEN_MAX || fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	buff = malloc((size_t)BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	stored = ft_read(fd, buff, stored);
	free(buff);
	line = extract_line(stored);
	stored = update_stored(stored);
	return (line);
}
