/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:19:45 by aavezou           #+#    #+#             */
/*   Updated: 2021/12/27 18:37:22 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_checkendofline(char *buffer_save);
size_t	ft_strlen(char *str);
char	*ft_print_line(char *buffer_save);
char	*ft_get_buffer_save(char *buffer_save);
char	*ft_read(int fd, char *buffer_read);
char	*get_next_line(int fd);
char	*ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif
