/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:31:34 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/16 18:56:04 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s || !fd)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write(fd, "\n", 1);
}

/*int main(void)
{
	// Teste 1: Escrever no terminal (stdout)
	printf("Teste 1 - stdout:\n");
	ft_putendl_fd("Escrevendo no terminal", 1);

	// Teste 2: Escrever no stderr
	printf("Teste 2 - stderr:\n");
	ft_putendl_fd("Mensagem de erro no stderr", 2);

	// Teste 4: String vazia
	printf("Teste 4 - string vazia:\n");
	ft_putendl_fd("", 1);

	// Teste 5: String nula
	printf("Teste 5 - string nula:\n");
	ft_putendl_fd(NULL, 1);  // Não deve printar nada

	return (0);
}*/