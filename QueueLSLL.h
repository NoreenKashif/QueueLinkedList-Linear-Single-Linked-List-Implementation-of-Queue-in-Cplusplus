#ifndef QUEUE_H
#define QUEUE_H
#include"Node.cpp"
template <typename T>
class Queue
{
	Node<T>* head;
	Node<T>* tail;
	int NOE;
public:
	Queue();
	void enQueue(T);
	T deQueue();
	T getElementAtFront() const;
	int getNoOfElements() const;
	void print();
};
#endif
