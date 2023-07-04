#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
	if(head == NULL)
		return 0;
	node *curr = head;
	node *next = NULL;
	node *tmp = NULL;
	while(1) {
		next = curr->next;
		if(next == NULL)
			return 0;
		tmp = head;
		while(1) {
			if(tmp == next)
				return 1;
			else if(tmp == curr)
				break;
			tmp = tmp->next;
		}
		curr = next;
	}
	return 0;
}
