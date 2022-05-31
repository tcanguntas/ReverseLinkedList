/*
 * LL.cpp
 *
 *  Created on: 31 May 2022
 *      Author: tayyipcan.guntas
 */
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;

	Node(int data): data(data), next(nullptr) {}

};

struct LinkedList
{
	Node* head;
	LinkedList()
	{
		head = nullptr;
	}

	void insertToHead(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}


	/*ITERATIVE SOLUTION*/
	void reverse()
	{
		Node* prev = nullptr;
		Node* next = nullptr;
		Node* curr = head;

		while(curr != NULL)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;

	}

	void printLL()
	{
		Node* temp = head;
		while(temp!= NULL)
		{
			cout<<temp->data <<"->";
			temp = temp->next;
		}
		cout<<"NULL\n";
		delete temp;
	}
};

int main()
{
	LinkedList ll;

	ll.insertToHead(12);
	ll.insertToHead(15);
	ll.insertToHead(16);

	ll.printLL();
	cout<<"--------------------\n";
	ll.reverse();
	ll.printLL();
}









