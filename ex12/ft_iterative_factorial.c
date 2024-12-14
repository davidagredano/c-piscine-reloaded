/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:15:39 by dagredan          #+#    #+#             */
/*   Updated: 2024/12/14 20:11:29 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	product;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	product = nb;
	while (--nb > 0)
		product *= nb;
	return (product);
}
