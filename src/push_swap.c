/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:17:14 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/09 17:21:33 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	// printf("sizeof tbox %lu\n", sizeof(t_box));
	// box.a.head = NULL;
	// box.a.tail = NULL;
	// box.b.head = NULL;
	// box.b.tail = NULL;
	// init_box(&box, 1);
	// box.a.type = A;
int	main(int argc, char *argv[])
{
	t_box	box;
	ft_bzero(&box, sizeof(t_box));
	if (argc >= 2)
	{
		parse_input(&box, argc, argv);
		if (elementcount(&box.a) <= 1)
			scope_error("single input");
	}
	else
		scope_error("invalid input");
	sort(&box);
	return (0);
}
