/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};
struct node * numberToLinkedList(int N) {
	int digit;
	struct node* cur = (struct node*) malloc(sizeof(struct node));
	struct node *head = NULL;//head pointer
	if (N < 0)//if number negative
		N = -(int)N;
	while (N >= 0){
		digit = N % 10;
		N /= 10;
		cur->num = digit;
		cur->next = head;
		head = cur;
		if (N == 0)
			break;
		cur = (struct node*) malloc(sizeof(struct node));

	}
	return head;
}