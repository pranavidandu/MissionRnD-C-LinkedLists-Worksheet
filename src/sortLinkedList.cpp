/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *ptr = head;
	struct node *ptr1 = head;
	while (ptr != NULL){
		while (ptr1->next != NULL){
			if (ptr1->num > ptr1->next->num){
				ptr1->num = ptr1->num + ptr1->next->num;
				ptr1->next->num = ptr1->num - ptr1->next->num;
				ptr1->num = ptr1->num - ptr1->next->num;
			}
			ptr1 = ptr1->next;
		}
		ptr = ptr->next;
		ptr1 = head;
	}
	return head;
}