/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:39:18 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/20 11:39:20 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int to_find)
{
	char	to_find_c;

	to_find_c = (unsigned char)to_find;
	while (*str != to_find_c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return ((char *)str);
}

char	*ft_strndup(const char *src, int n)
{
	size_t	i;
	char	*copy_str;

	i = 0;
	copy_str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy_str || !src)
		return (NULL);
	while (src[i] && i < (size_t)n)
	{
		copy_str[i] = src[i];
		i++;
	}
	copy_str[i] = '\0';
	return (copy_str);
}

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*copy_str;

	i = 0;
	copy_str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy_str || !src)
		return (NULL);
	while (src[i])
	{
		copy_str[i] = src[i];
		i++;
	}
	copy_str[i] = '\0';
	return (copy_str);
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*output;
	size_t	len;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2);
	output = malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	while (str1[++i])
		output[i] = str1[i];
	while (str2[++j])
		output[i + j] = str2[j];
	output[len] = '\0';
	return (output);
}
