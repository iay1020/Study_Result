#pragma once

class Node;

class LinkedList
{
public:
	Node* head;

public:
	LinkedList();
	~LinkedList();

	Node* CreateNode(int data_);

	void Add(int data_);
	void Delete(int data_);
	void Print();

};

