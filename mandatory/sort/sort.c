/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 23:00:00 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 23:00:02 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void move_to_b(t_list **a , t_list **b){
    int i =0 ;
    int size = ft_lstsize(*a); 
    while(i<size){
        if((*a)->index<=i){
            i++; 
            pb(a,b); 
        }
        else if((*a)->index<=i+16){
            i++; 
            pb(a,b); 
            rb(b); 
        }
        else{
            ra(a); 
        }
    }
}

void move_to_a(t_list **a , t_list **b){
    int i =0 ; 
    int pos ; 
    t_list *tmp ; 
    int size_before = ft_lstsize(*b); 
    while(i<size_before){
        pos =0 ;
        tmp = *b; 
        while(tmp->index!=ft_lstsize(*b)-1){
            pos++; 
            tmp=tmp->next ; 
        }
        if(pos<=(ft_lstsize(*b))/2){
            while (pos>0)
            {
                pos--; 
                rb(b); 
            } 
        }
        else{
            while (pos<ft_lstsize(*b))
            {
                pos++; 
                rrb(b); 
            } 
        }
        pa(a,b);
        i++; 
    }
}