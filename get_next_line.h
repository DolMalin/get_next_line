/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:26:05 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/17 12:32:50 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

/* =============== DEFINES =============== */
#define EOF 0
#define ERR -1

/* =============== INCLUDES =============== */
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

// TO REMOVE //
#include <string.h>
#include <stdio.h>
// ======== //

/* =============== PROTOTYPES =============== */
char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int to_find);
char	*ft_strndup(const char *src, int n);
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlen(const char *str);

#endif