/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 12:38:42 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/17 22:10:11 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_display_file(char *path);

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(STDERR_FILENO, "File name missing.\n", 19);
	else if (argc == 2)
	{
		if (ft_display_file(argv[1]) != 1)
			write(STDERR_FILENO, "Cannot read file.\n", 18);
	}
	else
		write(STDERR_FILENO, "Too many arguments.\n", 20);
}
