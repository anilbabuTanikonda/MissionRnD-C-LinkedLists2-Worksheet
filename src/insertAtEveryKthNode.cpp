/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if (head==NULL || K==0 || K<0)
	return NULL;
	int l = 0;
	int count = 0,k,i;
	struct node *ptr,*pre=NULL,*tmp,*t;
	ptr = head;
	while (ptr != NULL)
	{
		l++;
		ptr = ptr->next;
	}
	if (K>l)
		return head;
	k = l/ K;
	ptr = head;
	i = 0;
	int flag;
	while(ptr!=NULL)
	{
		t = pre;
		flag = 0;
		if (count == K)
		{
			    tmp = (struct node *)malloc(sizeof(struct node));
			    tmp->num = K;
				tmp->next = ptr;
				t->next = tmp;
				
				count = 0;
				flag = 1;
			
		}
		
		count++;
			pre = ptr;
			ptr = ptr->next;
		
	}
	if (ptr == NULL && K==count)
	{
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->num = K;
		tmp->next = NULL;
		pre->next = tmp;
	}
	printf("%d\t%d\n",k,count);
	return head;
}
