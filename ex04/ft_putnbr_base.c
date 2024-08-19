/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:36:31 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/19 18:57:47 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_strlen(char *str)
{
	int	i;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;
	char	temp;

	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		temp = '-';
		write(1, &temp, 1);
		ft_putnbr_base(-nbr,base);
	}
	else if (nbr < len_base)
	{
		temp = base[nbr];
		write(1, &temp, 1);
	}
	else
	{
		ft_putnbr_base(nbr / len_base, base);
		temp = base[nbr & len_base];
		write(1, &temp, 1);
	}
	
}
int main(void)
{
	char base[] = "01";
	ft_putnbr_base(5466,base);
	return (0);
}
