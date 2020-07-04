/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 16:01:23 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 16:07:00 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	//no sé si el 127 (DEL) es printable. 
	return (c >= 0 && c <= 31) ? 0 : 1;
}

int main(void)
{
	for (int i = 0; i < 128; i++)
	{
		printf("%d: %d\n", i, isprint(i));
		printf("%d: %d\n\n", i, ft_isprint(i));
	}
	return (0);
}