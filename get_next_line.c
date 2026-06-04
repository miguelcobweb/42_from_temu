/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:12:00 by micampos          #+#    #+#             */
/*   Updated: 2026/06/04 15:16:46 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*helper;
	char		*new_line;
	int			received;

	if (BUFFER_SIZE <= 0 || BUFFER_SIZE > 10000000)
		return (NULL);
	received = 1;
	helper = NULL;
	while (normal_strchr(buffer) == NULL && received > 0)
	{
		helper = normal_strjoin(helper, buffer);
		received = read(fd, buffer, BUFFER_SIZE);
		if (received < 0)
			return (free(helper), NULL);
		buffer[received] = '\0';
	}
	if (received == 0)
	{
		new_line = helper;
		return (new_line);
	}
	return (new_line = extract_line(helper, buffer));
}
// #include <stdio.h>
// int main(void)
// {
// 	int fd;
// 	char *str;

// 	fd = open("text.txt", O_RDONLY);
// 	// while ((str = get_next_line(0)) != NULL)  
// 	// {
// 	// 	printf("line: %s", str);
// 	// 	printf("---------------------------\n");
// 	// 	free(str);
// 	// }
// 	str = get_next_line(fd);
// 	printf("line: %s", str);
// 	free(str);
// 	return (0);
// }
