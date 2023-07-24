/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:04:43 by raalonso          #+#    #+#             */
/*   Updated: 2023/07/24 20:17:56 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*get_stash(int fd, char *stash);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *c);
char	*clean_stash(char *stash);
char	*get_lines(char *stash);

#endif
