/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:37:40 by jerda-si          #+#    #+#             */
/*   Updated: 2024/08/19 13:36:24 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;	

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

//int main(){
//	ft_print_reverse_alphabet();
//	return 0;
//}
