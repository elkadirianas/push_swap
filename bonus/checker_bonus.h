/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:59:54 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 14:59:57 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

// get_next_line
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*get_next_line(int fd);

// parsing
void				parse(t_list **a, int argc, char **argv);
char				*ft_strjoinn(char const *s1, char const *s2);
char				**free_splitted(char **splitted);
char				**ft_split(char const *s, char c);

// list_utils
void				ft_lstadd_back(t_list **lst, int data);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(int data);
t_list				*ft_lstlast(t_list *lst);
void				free_list(t_list **lst);
int					is_sorted(t_list *lst);

// moves
void				push(t_list **a, t_list **b);
void				rev_rotate(t_list **lst);
void				rotate(t_list **lst);
void				swap(t_list *lst);
void				excute_move(t_list **stack_a, t_list **stack_b, char *str);

// string utils
long				ft_atol(const char *nbr);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					is_valid_move(char *str);
// utils
void				swap_int(int *a, int *b);
int					is_empty(char *str);
int					is_dup(t_list *a, int num);
int					is_valid(char *str);
#endif
