/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
}*start2;

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	if (head1 == NULL && head2 == NULL)
		return NULL;
	
		struct node *result = NULL;
		if (head1 == NULL)
			return head2;
		else if (head2== NULL)
			return head1;

		/* For the first node, we would set the result to either a or b */
		if (head1->num <= head2->num){
			result = head1;
			/* Result's next will point to smaller one in lists
			starting at a->next  and b */
			result->next = merge2LinkedLists(head1->next, head2);
		}
		else {
			result = head2;
			/*Result's next will point to smaller one in lists
			starting at a and b->next */
			result->next = merge2LinkedLists(head1, head2->next);
		}
		return result;
}
	
