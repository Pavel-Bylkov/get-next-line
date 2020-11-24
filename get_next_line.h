/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whector <whector@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:34:56 by whector           #+#    #+#             */
/*   Updated: 2020/11/15 20:07:27 by whector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	32
# endif

int			get_next_line(int fd, char **line);
char		*ft_strjoin(char *s1, char const *s2);
size_t		ft_strlen(const char *s);
char		*ft_str_endl(char *s);
char		*ft_strdup(const char *str);

#endif
