#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>
#include <exception>
using namespace std;

template <class T>
class Queue
{
private:
	class Node
	{
	public:
		T data;
		Node *next;
	};

	const static int DEFAULT_SIZE = 10;
	int size;
	int limitSize;
	Node *head;
	Node *tail;

private:
	void initQueue();

public:
	Queue(int size);
	Queue();
	~Queue();
	int getSize();
	bool add(T data);
	bool add(int index, T data);
	bool remove(T data);
	bool remove(int index, T data);
	void print();
	friend ostream & operator << (ostream &os, Queue &q);
};





#endif