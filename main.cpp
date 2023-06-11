#include<iostream>
#include<cstring>
#include<string>
#include"QueueLSLL.h"
using namespace std;

void generatePrintBinary(int n)
{
	// Create an empty queue of strings
	Queue<string> q;

	// Enqueue the first binary number
	q.enQueue("1");

	// This loops is like BFS of a tree with 1 as root
	// 0 as left child and 1 as right child and so on
	while (n--) {
		// print the front of queue
		string s1 = q.getElementAtFront();
		
		q.deQueue();
		cout << s1<<"\n";

		string s2 = s1; // Store s1 before changing it

		// Append "0" to s1 and enqueue it
		q.enQueue(s1.append("0"));

		// Append "1" to s2 and enqueue it. Note that s2
		// contains the previous front
		q.enQueue(s2.append("1"));
	}
}
int main()
{
	//Queue<int>l;
	//l.enQueue(78);//insertAtTail
	//l.enQueue(89);
	//l.enQueue(53);
	//l.enQueue(12);
	//l.enQueue(898);
	//l.enQueue(88);
	//l.enQueue(8);
	//l.enQueue(122);
	//l.enQueue(12);
	//l.enQueue(76);
	//l.enQueue(5);
	//cout << l.deQueue() << "\n";//removeAtHead to make O(1) time cost
	//cout << l.deQueue() << "\n";
	//cout << l.deQueue() << "\n";
	///*cout << l.deQueue() << "\n";*/
	//cout<<l.getElementAtFront()<<"\n";
	//cout<<l.getNoOfElements()<<"\n";
	//l.print();
	generatePrintBinary(35);
}