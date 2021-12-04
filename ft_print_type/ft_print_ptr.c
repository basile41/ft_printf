/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:07:50 by bregneau          #+#    #+#             */
/*   Updated: 2021/12/02 15:31:26 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int ft_print_ptr(void *ptr)
{
	ft_putstr_fd("0x", 1);
	return (2 + ft_print_hexa((unsigned long)ptr, 'x'));
}
