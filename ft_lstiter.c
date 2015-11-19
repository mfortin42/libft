#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (f != NULL)
		while (lst != NULL)
		{
			f(lst);
			lst = lst->next;
		}
}
