#include "lists.h"
/**
* check_cycle -checks if a linked contains a cycle 
*@list:linked list to cjeck
*Return: 1 if the list has a cycle, 0 if it doesn't 
*/
int check_cycle(listint_t*list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	while (slow && fast && fast-> next )
	{
	slow = slow->next;
	fast = fast->next;
	if (slow == fast)
		return (1);
	}
	return (0);
}
