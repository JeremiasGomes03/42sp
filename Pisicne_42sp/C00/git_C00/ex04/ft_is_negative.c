/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:33:55 by jerda-si          #+#    #+#             */
/*   Updated: 2024/08/19 13:38:16 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char letter);

void	ft_is_negative(int n)
{	
	if (n < 0)
	{
		ft_print('N');
	}
	else
	{
		ft_print('P');
	}
}

void	ft_print(char letter)
{
	write(1, &letter, 1);
}

//int main (){
//	ft_is_negative(100);
//	return (0);
//}
