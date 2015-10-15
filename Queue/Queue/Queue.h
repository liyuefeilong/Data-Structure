#include <iostream>

#define SIZE 10

using namespace std;

// 循环队列
// 当对头和队尾的索引值达到SIZE时
// 使用 % SIZE 使其回到数组的第一个下标
class Queue
{
public:
	void initQueue()
	{
		for (int i = 0; i < SIZE; ++i)
			arr[i] = NULL;
		front = -1;
		rear = -1;
	}

	void EnQueue(int a)
	{
		if (rear == (rear + 1) % SIZE)
		{
			cout << "The queue is full!";
			return;
		}
		else
		{
			rear = (rear + 1) % SIZE; // 更新队尾的下标
			arr[rear] = a;
		}
	}

	int DeQueue()
	{
		if (isEmpty())
		{
			cout << "The queue is empty!";
			return NULL;
		}
		else
		{
			front = (front + 1) % SIZE;
			int temp = arr[front];
			arr[front] = NULL;
			return temp;
		}
	}

	int checkFront()
	{
		if (isEmpty())
		{
			cout << "The queue is empty!";
			return NULL;
		}
		else return arr[front + 1];
	}

	int isEmpty()
	{
		if (front == rear) return true;
		else return false;
	}

	Queue()
	{
		initQueue();
	}

private:
	int arr[SIZE];
	int front;  // 队首 
	int rear;   // 队尾
};
