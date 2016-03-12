/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head==NULL)
	return -1;
	int l=0,k,t=0;
	int sum = 0;
	struct node *ptr;
	ptr = head;
	while (ptr != NULL)
	{
		l++;
		ptr = ptr->next;
	}
	ptr = head;
	if (l % 2 != 0)
	{
		
		k = (l /2)+1;
		
		while (ptr != NULL)

		{
			t++;
			if (t == k)
			{
			
				return ptr->num;
			}
			ptr = ptr->next;
			

			
		}

	}
	else
	{
		k = l / 2;
		ptr = head;
		
		while (ptr != NULL)
		{
			t++;
			if (t == k)
			{
				sum = sum + ptr->num;
				ptr = ptr->next;
				sum = ptr->num+sum;
				return sum / 2;
			}
			ptr = ptr->next;
			
		}


	}
	
}
