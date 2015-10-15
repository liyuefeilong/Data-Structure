#include <iostream>
#define SIZE 10

using namespace std;

class stack
{
public:
	void initStack() // ջ�ĳ�ʼ��
	{
		top = -1;
	}

	void push(int a) // ��ջ
	{
		++top;
		if (top < SIZE)
			arr[top] = a;
		else
			cout << "The stack is full!";
	}

	int pop() // ��ջ
	{
		if (isEmpty())
		{
			cout << "The stack is empty!";
			return NULL;
		}
		else
		{
			int popNum = arr[top];
			arr[top] = NULL;
			--top;
			return popNum;
		}
	}

	int checkTop()
	{
		if (isEmpty())
		{
			cout << "The stack is empty!";
			return NULL;
		}
		else return arr[top];

	}

	bool isEmpty()
	{
		if (top == -1) return true;
		else return false;
	}

	stack()
	{
		initStack();
	}

private:
	int arr[SIZE];
	int top;
};
