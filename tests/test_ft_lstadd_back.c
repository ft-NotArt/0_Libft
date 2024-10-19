#include "test.h"

void test_ft_lstadd_back ()
{
	printf("\n\n-- TEST LSTADD_BACK --\n\n") ;

	t_list *list1 = ft_lstnew(NULL);
	t_list *new = ft_lstnew("abc") ;
	t_list **ptr = &list1 ;


	printf("list of 1 : ") ;
	ft_lstadd_back(ptr, new) ;
	if   (!memcmp(list1->next->content, "abc", 3)
		&& *ptr == list1)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("list of 3 : ") ;
	list1 = ft_lstnew(NULL) ;
	t_list *list2 = ft_lstnew("a") ;
	t_list *list3 = ft_lstnew("b") ;
	new = ft_lstnew("c") ;
	ptr = &list1 ;
	t_list *current = list1 ;
	ft_lstadd_back(ptr, list2) ;
	ft_lstadd_back(ptr, list3) ;
	ft_lstadd_back(ptr, new) ;
	char c[] = "a" ;
	if (current->next == list2)
		printf("✅") ;
	else
		printf("❌") ;
	current = current->next ;
	if (current->next == list3)
		printf("✅") ;
	else
		printf("❌") ;
	current = current->next ;
	if (current->next == new)
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	current = list1 ;
	for (int i = 0; i < 3; i++)
	{
		current = current->next ;
		if   (!memcmp(current->content, c, 1)
			&& ptr == &list1)
			printf("✅") ;
		else
			printf("❌") ;
		c[0] += 1 ;
	}
	printf("\n") ;
}