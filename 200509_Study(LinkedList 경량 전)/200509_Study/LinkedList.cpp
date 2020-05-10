#include "LinkedList.h"
#include<iostream>
using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;

}

LinkedList::~LinkedList()
{
}

void LinkedList::Add(int data_)
{
	if (head == nullptr)
	{
		Node* newData = new Node();
		newData->data = data_;

		head = newData;
		Node** pp = &head;

		system("pause");
	}

	else head->Add(data_);

}

void LinkedList::Delete(int data_)
{
	if (head)
	{
		if (head->data == data_)
		{
			Node* tempPtr = head->nextNode;
			delete head;

			head = tempPtr;

		}	

		else head->Delete(data_);
	}

}

void LinkedList::Delete_2(int data_)
{
	if (head)
	{
		head->Delete_2(data_, &head);

	}

}

void LinkedList::Print()
{
	if (head) head->Print();

}
