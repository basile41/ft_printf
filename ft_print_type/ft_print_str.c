/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:34:41 by bregneau          #+#    #+#             */
/*   Updated: 2021/12/04 08:26:28 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_print_str(char *str)
{
	if (!str)
		return (ft_print_str("(null)"));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
