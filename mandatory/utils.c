/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:07:30 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:07:32 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_int(int *a, int *b)
{
	*a += *b;
	*b = (*a) - (*b);
	*a -= *b;
}
static int is_number(char c){
	if((c>='0' && c<='9'))
		return 1 ; 
	return 0 ; 
}

int is_empty(char *str){
	int i =0  ; 
	if(ft_strlen(str)==0)
		return 1 ; 
	while(str[i]){
		if(!((str[i]>=9 && str[i]<=13) || str[i]==32))
			return 0 ; 
		i++; 
	}
	return 1 ; 
}
int is_dup(t_list *a,int num){
	t_list *tmp =a; 
	while(tmp){
		if(tmp->data==num)
			return 1 ; 
		tmp=tmp->next; 
	}
	return 0 ; 
}

int is_valid(char *str){
	int i =0 ; 
	if(str[0]=='+' || str[0]=='-')
		i++; 
	if(i==1){
		if(!is_number(str[i]))
			return 0 ; 
	}
	while(str[i]){
		if(!is_number(str[i]))
			return 0 ; 
		i++; 
	}
	if(ft_atol(str)>INT_MAX || ft_atol(str)<INT_MIN)
		return 0 ; 
	return 1 ; 
}