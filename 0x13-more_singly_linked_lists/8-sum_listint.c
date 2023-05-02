#include "lists.h"

/**
* sum_listint - calculates the sum of all data in listint_t list.
* @head: the first node in the linked list
*
* Return: resulting the sum
*
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
