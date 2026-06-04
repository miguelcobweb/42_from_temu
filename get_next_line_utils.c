/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:56:51 by micampos          #+#    #+#             */
/*   Updated: 2026/05/25 13:04:13 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	normal_strlen(char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*normal_strchr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\0')
		return (NULL);
	return (&str[i]);
}

char	*normal_strjoin(char *helper, char *buffer)
{
	char	*str;
	size_t	helper_len;
	size_t	buffer_len;
	size_t	i;
	size_t	j;

	if (helper == NULL && buffer[0] == '\0')
		return (NULL);
	helper_len = normal_strlen(helper);
	buffer_len = normal_strlen(buffer);
	str = malloc(helper_len + buffer_len + 1);
	if (str == NULL)
		return (free(helper), NULL);
	i = 0;
	while (i < helper_len)
	{
		str[i] = helper[i];
		i++;
	}
	j = 0;
	while (j < buffer_len)
		str[i++] = buffer[j++];
	str[i] = '\0';
	return (free(helper), str);
}

char	*extract_line(char *helper, char *buffer)
{
	size_t	i;
	size_t	j;
	size_t	helper_len;
	size_t	buffer_len;
	char	*new_line;

	helper_len = normal_strlen(helper);
	buffer_len = normal_strlen(buffer);
	new_line = normal_strjoin(helper, buffer);
	if (new_line == NULL)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n')
		i++;
	new_line[helper_len + i + 1] = '\0';
	j = 0;
	while (i < buffer_len)
		buffer[j++] = buffer[++i];
	return (new_line);
}
