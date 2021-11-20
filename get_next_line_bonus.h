/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:39:07 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/20 11:39:11 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*=============================================================================
                __                            __    .__  .__               
   ____   _____/  |_    ____   ____ ___  ____/  |_  |  | |__| ____   ____  
  / ___\_/ __ \   __\  /    \_/ __ \\  \/  /\   __\ |  | |  |/    \_/ __ \ 
 / /_/  >  ___/|  |   |   |  \  ___/ >    <  |  |   |  |_|  |   |  \  ___/ 
 \___  / \___  >__|   |___|  /\___  >__/\_ \ |__|   |____/__|___|  /\___  >
/_____/      \/            \/     \/      \/                     \/     \/ 
=============================================================================*/

/* =============== INCLUDES =============== */
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

/* =============== PROTOTYPES =============== */
char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int to_find);
char	*ft_strndup(const char *src, int n);
char	*ft_strdup(char const *src);
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlen(const char *str);

#endif