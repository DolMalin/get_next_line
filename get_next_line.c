/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:30:45 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/17 15:08:12 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	find_endline(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

static char	*parse_str(char **str)
{
	char	*temp;
	char	*output;

	temp = *str;
	*str = ft_strndup(ft_strchr(temp, '\n') + 1, ft_strlen(temp));
	output = ft_strndup(temp, ft_strlen(temp) - ft_strlen(*str));
	free(temp);
	return (output);
}

static void	addback_static(char **str, char *buffer)
{
	char	*temp;

	temp = *str;
	*str = ft_strjoin(temp, buffer);
	free(temp);
}

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*str = NULL;
	int			ret;

	if (fd < 0 || fd > 1024 || !fd || BUFFER_SIZE < 1)
		return (NULL);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret < 1)
		{
			free(str);
			return (NULL);
		}
		buffer[ret] = '\0';
		if (!str)
			str = ft_strndup(buffer, ft_strlen(buffer));
		else
			addback_static(&str, buffer);
		if (ft_strchr(str, '\n'))
			break ;
	}
	if (ft_strchr(str, '\n'))
		return (parse_str(&str));
	return (str);
}
