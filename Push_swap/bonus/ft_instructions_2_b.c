/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_2_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:57:24 by crigonza          #+#    #+#             */
/*   Updated: 2022/07/28 14:08:53 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker_bonus.h"

void	ft_push_b(t_stack **stack_a, t_stack **stack_b, t_moves **moves)
{
	t_stack	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	if (*stack_b)
		(*stack_b)->prev = tmp;
	tmp->next = *stack_b;
	*stack_b = tmp;
	(*stack_b)->prev = NULL;
	ft_new_move(moves, "pb\n");
}

void	ft_push_a(t_stack **stack_a, t_stack **stack_b, t_moves **moves)
{
	t_stack	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	if (*stack_a)
		(*stack_a)->prev = tmp;
	tmp->next = *stack_a;
	*stack_a = tmp;
	(*stack_a)->prev = NULL;
	ft_new_move(moves, "pa\n");
}

void	ft_swap_ab(t_stack **a, t_stack **b, t_moves **moves)
{
	ft_swap(a, 'x', moves);
	ft_swap(b, 'x', moves);
	ft_new_move(moves, "ss\n");
}
