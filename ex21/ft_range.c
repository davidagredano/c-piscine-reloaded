/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:14:41 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/16 11:34:38 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *) malloc((max - min) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
