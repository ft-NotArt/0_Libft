#include "test.h"

void test_ft_lstadd_front ()
{
	printf("\n\n-- TEST LSTADD_FRONT --\n\n") ;

	t_list *list1 = ft_lstnew("abc");
	t_list *new = ft_lstnew(NULL) ;
	t_list *ptr = list1 ;

	printf("list of 2 : ") ;
	ft_lstadd_front(&ptr, new) ;
	if   (!ft_memcmp(new->next->content, "abc", 4)
		&& ptr == new)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("list of 4 : ") ;
	char *str2 = "a";
	char *str3 = "b";
	char *str4 = "c";
	char *str5 = "d";
	t_list *list2 = ft_lstnew(str2) ;
	t_list *list3 = ft_lstnew(str3) ;
	t_list *list4 = ft_lstnew(str4) ;
	t_list *list5 = ft_lstnew(str5) ;
	ptr = list2 ;
	ft_lstadd_front(&ptr, list3) ;
	ft_lstadd_front(&ptr, list4) ;
	ft_lstadd_front(&ptr, list5) ;
	t_list *current = list5 ;
	if (current->next == list4)
		printf("✅") ;
	else
		printf("❌") ;
	current = current->next ;
	if (current->next == list3)
		printf("✅") ;
	else
		printf("❌") ;
	current = current->next ;
	if (current->next == list2)
		printf("✅ - ") ;
	else
		printf("❌ - ") ;
	current = list5 ;
	char c[] = "d" ;
	for (int i = 0; i < 3; i++)
	{
		if   (!memcmp(current->content, c, 1))
			printf("✅") ;
		else
			printf("❌") ;
		current = current->next ;
		c[0] -= 1 ;
	}
	printf("\n") ;
}