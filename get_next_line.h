/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:57:26 by micampos          #+#    #+#             */
/*   Updated: 2026/05/25 14:54:25 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

size_t	normal_strlen(char *str);
char	*normal_strchr(char *str);
char	*normal_strjoin(char *helper, char *buffer);
char	*extract_line(char *helper, char *buffer);
char	*get_next_line(int fd);

#endif