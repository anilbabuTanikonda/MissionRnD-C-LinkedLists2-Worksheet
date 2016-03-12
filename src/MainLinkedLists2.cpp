/*

Use MainLinkedLists2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of LinkedLists2 Lesson:

->Merging two Linked Lists
->Reversing a LinkedList
->Inserting at a specific index 

*/
#include <stdio.h>
#include<malloc.h>
#include<conio.h>
#include "FunctionHeadersLinkedLists2.h"
struct node
{
	int num;
	struct node *next;
}*start;
int main(){

	//Test InsertAtEveryKthNode
	struct node *tmp;
	int i = 0;
	while (i < 5)
	{

		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->num = 10;
		if (start == NULL)
		{

			tmp->next = NULL;
			start = tmp;
		}
		else
		{
			tmp->next = start; 
			start = tmp;
		}
		i++;
	}
	struct node *h = insertAtEveryKthNode(start,1);
	struct node *ptr;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d",ptr->num);
		ptr = ptr->next;
	}
	//Test LinkedListMedian

	//Test merge2 LinkedLists

	//Test reverse LinkedList
	getch();
	return 0;
}