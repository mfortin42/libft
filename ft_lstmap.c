#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;

	newlist = f(lst);
	if (newlist != NULL && lst->next != NULL)
	{
		newlist->next = ft_lstmap(lst->next, f);
		return (newlist);
	}
	return (NULL);
}
