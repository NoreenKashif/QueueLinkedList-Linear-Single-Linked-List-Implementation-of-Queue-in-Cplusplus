#include"QueueLSLL.h"
#include<iostream>
using namespace std;
template <typename T>
Queue<T>::Queue()
{
	head = nullptr;
	tail = nullptr;
	NOE = 0;
}
template <typename T>
T Queue<T>::deQueue()
{
	T val;
	/*if (head == nullptr)
		return;
	else*/
	{
		Node<T>* p = head;
		val = p->info;
		head =p->next;
		
		if (NOE==1)
		{
			tail = nullptr;
			head = nullptr;
		}
			
		delete p;
		p = nullptr;
		NOE--;
		return val;
		
	}
}
template <typename T>
void Queue<T>::enQueue(T val)
{
	if (head == nullptr && tail==nullptr)
	{
		Node<T>* t = new Node<T>(val);
		t->next = nullptr;
		head = t;
		tail = t;
		NOE++;
	}
	else
	{
		Node<T>* p1 = new Node<T>(val);
		Node<T>* a = tail;
		a->next = p1;
		tail = p1;
		NOE++;
	}
}
template <typename T>
T Queue<T>::getElementAtFront() const
{
	/*if (!head)
		return;*/
	T val = head->info;
	return val;
}
template <typename T>
int Queue<T>::getNoOfElements() const
{
	return NOE;
}
template <typename T>
void Queue<T>::print()
{
	Node<T>* p = head;
	while (p != nullptr)
	{
		cout << p << " : " << p->info << " : " << p->next << "\n";
		p = p->next;
	}
}
