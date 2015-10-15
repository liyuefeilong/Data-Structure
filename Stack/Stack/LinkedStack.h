#include <iostream>

using namespace std;

struct LinkedNode
{
	int data;
	LinkedNode *next;
};

class LinkedStack
{
public:
	void initStack()
	{
		top = NULL;
	}

	void push(int a)
	{
		LinkedNode *temp = new LinkedNode;
		temp->data = a;
		temp->next = top;
		top = temp;
	}

	int pop()
	{
		int popNum = top->data;
		LinkedNode *temp = top->next;
		delete top;
		top = temp;
		return popNum;
	}

	bool isEmpty()
	{
		if (top == NULL) return true;
		else return false;
	}

	LinkedStack()
	{
		initStack();
	}

	~LinkedStack()
	{
		delete top;
	}

private:
	LinkedNode *top;
};
