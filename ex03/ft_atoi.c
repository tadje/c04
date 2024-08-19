/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:54:58 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/19 18:33:22 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_atoi(char *str)
{
	int	i;
	int 	temp;
	int	j;

	i = 0;
	temp = 1;
	j = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			temp *= -1;
		i++;
	}
	while (str[i+j] <= '9' && str[i+j] >= '0')
	{
		if (j == 0)
			temp *= (int)(str[i]-'0');
		else
			temp = temp*10 + (int)(str[i +j]-'0');
		j++;
	}
	return temp;
}
#include <stdio.h>
int main(void)
{
	char str[] = "  ++--+-++-154668ljskdjfeloim";
	printf("%d\n",ft_atoi(str));
}
