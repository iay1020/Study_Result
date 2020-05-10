#pragma once
class Node
{
public:
	int data;
	Node* nextNode;

public:
	Node();
	~Node();

	void Add(Node* node_);
	void Delete(int data_, Node** ppThis);
	void Print();

};

