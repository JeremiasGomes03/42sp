/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:44:31 by jerda-si          #+#    #+#             */
/*   Updated: 2024/09/04 23:41:10 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_i;

	dest_i = 0;
	i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_i] = src[i];
		i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
/* #include <stdio.h>
 #include <string.h>

 int main(void) {
     char dest[100];
     char src[50];
     char dest_copy[100]; // Usado para comparar com a função padrão
     char src_copy[50]; // Usado para comparar com a função padrão

     // Teste 1: Concatenar strings não vazias
     strcpy(dest, "3123 ");
     strcpy(src, "gomes");
     strcpy(dest_copy, dest); // Copia para o destino de comparação
     strcpy(src_copy, src); // Copia para a fonte de comparação
     ft_strncat(dest, src, 3); // Esperado: "jeremias gom"
     strncat(dest_copy, src_copy, 3); // Usando a função padrão
     printf("Teste 1 - ft_strncat: %s\n", dest);
     printf("Teste 1 - strncat: %s\n", dest_copy);
 				 printf("\n");
     // Teste 2: Concatenar string não vazia em string vazia
     strcpy(dest, "");
     strcpy(src, "Gomes");
     strcpy(dest_copy, dest); // Copia para o destino de comparação
     strcpy(src_copy, src); // Copia para a fonte de comparação
     ft_strncat(dest, src, 4); // Esperado: "Gome"
     strncat(dest_copy, src_copy, 4); // Usando a função padrão
     printf("Teste 2 - ft_strncat: %s\n", dest);
     printf("Teste 2 - strncat: %s\n", dest_copy);
 			printf("\n");
     // Teste 3: Concatenar string vazia em string não vazia
     strcpy(dest, "jeremias ");
     strcpy(src, "");
     strcpy(dest_copy, dest); // Copia para o destino de comparação
     strcpy(src_copy, src); // Copia para a fonte de comparação
     ft_strncat(dest, src, 5); // Esperado: "jeremias "
     strncat(dest_copy, src_copy, 5); // Usando a função padrão
     printf("Teste 3 - ft_strncat: %s\n", dest);
     printf("Teste 3 - strncat: %s\n", dest_copy);
 		  printf("\n");
     // Teste 4: Concatenar com nb igual a 0
     strcpy(dest, "jeremias");
     strcpy(src, "gomes");
     strcpy(dest_copy, dest); // Copia para o destino de comparação
     strcpy(src_copy, src); // Copia para a fonte de comparação
     ft_strncat(dest, src, 0); // Esperado: "jeremias"
     strncat(dest_copy, src_copy, 0); // Usando a função padrão
     printf("Teste 4 - ft_strncat: %s\n", dest);
     printf("Teste 4 - strncat: %s\n", dest_copy);
				printf("\n");
     // Teste 5: Concatenar com nb maior que o comprimento da src
     strcpy(dest, "jeremias");
     strcpy(src, "da silva gomes");
     strcpy(dest_copy, dest); // Copia para o destino de comparação
    strcpy(src_copy, src); // Copia para a fonte de comparação
     ft_strncat(dest, src, 20); // Esperado: "jeremiasda silva gomes"
     strncat(dest_copy, src_copy, 20); // Usando a função padrão
     printf("Teste 5 - ft_strncat: %s\n", dest);
     printf("Teste 5 - strncat: %s\n", dest_copy);

     return 0;
 }*/
