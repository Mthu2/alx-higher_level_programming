#include "lists.h"

/**
 * check_cycle - checks for the cycle in the list
 * @list: the list to check
 * Return: 1 if true, 0 if false
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
