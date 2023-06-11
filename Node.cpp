#include<iostream>
template<typename T>
struct Node
{
	T info;
	Node<T>* next;
	Node()
	{
		info = 0;
		next = nullptr;
	}
	Node(T val)
	{
		info = val;
		next = nullptr;
	}

};