#include "lists.h"

/**
 * check_cycle - check for loop in linked list
 * @list: head of linked list
 *
 * Description - check for loops in linked list
 * Return: 1 if cyclic, 0 if not cyclic
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	while (fast != NULL && fast->next !=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}
	return (0);
}
