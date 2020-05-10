#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
	data = 0; 
	nextNode = nullptr;

}

Node::~Node()
{
}

void Node::Add(int data_)
{
	if (nextNode == NULL)
	{
		Node* newData = new Node();
		newData->data = data_;

		nextNode = newData;

	}

	else nextNode->Add(data_);

}

void Node::Delete(int data_)
{
	if (nextNode->data == data_)
	{
		Node* tempPtr = nextNode->nextNode;
		delete nextNode;

		nextNode = tempPtr;

	}

	else if(nextNode->nextNode) nextNode->Delete(data_);

}

void Node::Delete_2(int data_, Node** ppThis)
{
	if (data == data_)
	{
		*ppThis = nextNode;
		delete this;

		return;
	}
	else nextNode->Delete_2(data_, &nextNode);

}

void Node::Print()
{
	cout << data << endl;
	if (nextNode) nextNode->Print();

}
