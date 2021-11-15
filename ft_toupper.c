/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:11:00 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/15 17:11:29 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lower case to upper case letter conversion */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
