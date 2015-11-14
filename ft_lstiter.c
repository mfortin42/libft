#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	while (tmp != NULL)
	{
		tmp = lst->next;
		f(lst);
		lst = tmp;
	}
}
