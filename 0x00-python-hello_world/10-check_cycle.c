#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: pointer to the beginning of the node.
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
  listint_t *inter1, *inter2;

  if (list == NULL || list->next == NULL)
    return (0);
  inter1 = list;
  inter2 = inter1->next;

  while (inter1 != NULL && inter2->next != NULL
	 && inter2->next->next != NULL)
    {
      if (inter1 == inter2)
	return (1);
      inter1 = inter1->next;
      inter2 = inter2->next->next;
    }
  return (0);
}
