#pragma once

class Node
{
public:
	int		 data;
	Node*	 nextNode;

public:
	Node();
	~Node();

	void Add(int data_);
	void Delete(int data_);
	void Delete_2(int data_, Node** ppThis);
	void Print();


};

