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

void Node::Add(Node* node_)
{
	if (nextNode == nullptr) nextNode = node_;
	else nextNode->Add(node_);

}

void Node::Delete(int data_, Node** ppThis)
{
	if (data == data_)
	{
		*ppThis = nextNode;
		delete this;
		return;

	}
	else nextNode->Delete(data_, &nextNode);

}

void Node::Print()
{
	cout << data << endl;
	if (nextNode) nextNode->Print();

}
