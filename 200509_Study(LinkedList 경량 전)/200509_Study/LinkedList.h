#pragma once
#include "Node.h"

class LinkedList
{
public:
	Node* head;

public:
	LinkedList();
	~LinkedList();

	void Add(int data_);
	void Delete(int data_);
	void Delete_2(int data_);
	void Print();

};

