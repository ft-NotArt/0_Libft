#include "test.h"

void test_ft_lstlast ()
{
	printf("\n\n-- TEST LSTLAST --\n\n") ;

	t_list *list1 = ft_lstnew(NULL) ;
	t_list *list2 = ft_lstnew(NULL) ;
	t_list *list3 = ft_lstnew(NULL) ;

	printf("list of 1 : ") ;
	if (ft_lstlast(list1) == list1)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("list of 3 : ") ;
	ft_lstadd_back(&list1, list2) ;
	ft_lstadd_back(&list1, list3) ;
	if    (ft_lstlast(list1) == list3
		&& ft_lstlast(list2) == list3)
		printf("✅\n") ;
	else
		printf("❌\n") ;
}