#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList()
{
	head = nullptr;

}

LinkedList::~LinkedList()
{
}

// 새 노드 생성 코드를 중복해서 사용하지 않기 위해 함수로 만듬
Node* LinkedList::CreateNode(int data_)
{
	Node* newNode = new Node;
	newNode->data = data_;
	newNode->nextNode = nullptr;

	return newNode;
}

void LinkedList::Add(int data_)
{
	if (head == nullptr) head = CreateNode(data_);
	else head->Add(CreateNode(data_));

}

void LinkedList::Delete(int data_)
{
	if (head) head->Delete(data_, &head);

}

void LinkedList::Print()
{
	if (head) head->Print();

}
