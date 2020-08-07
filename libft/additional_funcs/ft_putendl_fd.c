/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:44:57 by nerviosus         #+#    #+#             */
/*   Updated: 2020/08/07 17:12:03 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	s[i] = '\n';
}