/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:16:53 by crigonza          #+#    #+#             */
/*   Updated: 2022/05/12 08:14:28 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<fcntl.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 7
#endif

char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *strge);
char    *ft_line(char *strge);
char	*ft_rest(char *strge);
char	*ft_join_free(char *strge, char *buffer);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
