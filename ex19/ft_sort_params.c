/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 12:38:42 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/15 22:32:55 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	ft_sort_array(int len, char **arr)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < len)
	{
		tmp = arr[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(arr[j], tmp) > 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
		i++;
	}
}

void	ft_print_array(int len, char **arr)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_array(argc - 1, &argv[1]);
		ft_print_array(argc - 1, &argv[1]);
	}
	else
		ft_putstr("Error: Missing arguments\n");
}
