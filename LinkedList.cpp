#pragma once
#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
	head = NULL;
}

void LinkedList::addnode(int i)
{
	node* q = new node;
	q->data = i;
	
	
	if (head == NULL) {
		
		q->next = NULL;
		head = q;
	}
	else
	{
		q->next = head;
		head = q;
	}

	
}

void LinkedList::addnodeBefore_I(int val, int newval)
{
	node* q = head;
	node* n = new node;
	n->data = newval;

	while (q != NULL && q->next->data != val) {

		q = q->next;

	}

	n->next = q->next;
	q->next = n;

}

void LinkedList::addnodelast(int n)
{

		node* q = head;
		

		while (q->next != NULL) {

			q = q->next;
		}
		node* nd = new node;
		nd->data = n;
		q->next = nd;
		nd->next = NULL;

}

void LinkedList::deletehead()
{
	node *q = head;
	head = head->next;
	delete q;
}

void LinkedList::deleteI(int i)
{
	node* q = head;
	node* ptr = NULL; 

	while (q->data != i) {
		ptr = q;
		q = q->next;
	}
	ptr->next = q->next;
	delete q;
}

void LinkedList::print()
{
	node* q = head;
	while (q != NULL) {

		cout << q->data << " ";
		q = q->next;

	}
	cout << endl;
}

int LinkedList::sum()
{
	int sum = 0;
	node* q = head;
	while (q != NULL) {

		sum = sum + q->data;
		q = q->next;

	}

	return sum;
}

