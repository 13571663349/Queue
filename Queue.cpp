#include "Queue.h"

template <class T>
Queue<T>::Queue()
{
	head = NULL;
	tail = NULL;
	size = 0;
	limitSize = DEFAULT_SIZE;
	initQueue();
}

template <typename T>
Queue<T>::Queue(int s)
{
	if (s <= 0)
		throw exception("Can't size <= 0");

	head = NULL;
	size = 0;
	tail = NULL;
	limitSize = s;
	initQueue();
}

template <typename T>
void Queue<T>::initQueue()
{
	Node *temp = head = tail = new Node;
	for (int i = 0; i < limitSize; i++)
	{
		temp->next = new Node;
		temp->next->next = NULL;
		temp = temp->next;
	}
	cout<< "Initialize a linked list for " << limitSize << " size!" <<endl;
}

template <typename T>
int Queue<T>::getSize()
{
	return size;
}

template <typename T>
ostream & operator << (ostream &os, Queue<T> &q)
{
	cout<< q.getSize()<<endl;
	return os;
}

template <typename T>
bool Queue<T>::add(T data)
{
	if (++size > limitSize)
		throw exception("Can't add!");

	Node *temp = tail;
	temp->data = data;
	tail = tail->next;
	return true;
}

template <typename T>
bool Queue<T>::add(int index, T data)
{
	if (++size > limitSize)
		throw exception("Can't add!");

	Node *temp = head;
	for (int i = 0; i < size; i++, temp = temp->next);
	temp->data = data;
	return true;
}

template <typename T>
bool Queue<T>::remove(T data)
{
	return true;
}

template <typename T>
bool Queue<T>::remove(int index, T data)
{
	return true;
}


template <typename T>
void Queue<T>::print()
{
	Node *t = head;
	int len = size;
	while(t->next != NULL && len-- > 0)
	{
		cout << t->data << endl;
		t = t->next;
	}
}


template <typename T>
Queue<T>::~Queue()
{
	Node *t = head;
	while(t->next != NULL)
	{
		cout << "Deleted node : 0x"<< t << endl;
		Node *p = t;
		t = t->next;
		delete p;
	}
}