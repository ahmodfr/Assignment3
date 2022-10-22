#pragma once
#include <iostream>
#include <vector>
using namespace std;



struct node
{
	int data;
	node* next;
	int count = 0;
};



class LinkedList
{
public:
	 
	node* head;

	LinkedList();
	void addnode(int i); // adds data i to the beginning of the list
	void addnodeBefore_I(int val, int newval); // adds node before the ith node data
	void addnodelast(int n);//add at the end of the node
	void deletehead();// deletes head node
	void deleteI(int i);//deletes Ith date 
	void print();// prints the list data
	int sum(); // returns sum

};
