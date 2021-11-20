/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:38:57 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/20 11:47:27 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*parse_str(char **str)
{
	char	*temp;
	char	*output;

	temp = *str;
	*str = ft_strdup(ft_strchr(temp, '\n') + 1);
	output = ft_strndup(temp, ft_strlen(temp) - ft_strlen(*str));
	free(temp);
	return (output);
}

static void	add_static(char **str, char	*buffer)
{
	char	*temp;

	if (*str)
	{
		temp = *str;
		*str = ft_strjoin(temp, buffer);
		free(temp);
		return ;
	}
	*str = ft_strdup(buffer);
}

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*str[OPEN_MAX];
	int			ret;
	char		*temp;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if ((ret == -1) || (ret == 0 && str[fd] == NULL))
			return (NULL);
		buffer[ret] = '\0';
		add_static(&str[fd], buffer);
		if (ft_strchr(str[fd], '\n'))
			return (parse_str(&str[fd]));
	}
	if (str[fd] && !str[fd][0])
		temp = NULL;
	else
		temp = ft_strdup(str[fd]);
	free(str[fd]);
	str[fd] = NULL;
	return (temp);
}
