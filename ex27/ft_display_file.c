/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:17:04 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/17 22:16:18 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

int	ft_display_file(char *path)
{
	int		bytes_read;
	int		fd;
	char	buffer[BUFFER_SIZE];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (close(fd));
		else if (bytes_read == 0)
			break ;
		else
		{
			if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
				return (close(fd));
		}
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
