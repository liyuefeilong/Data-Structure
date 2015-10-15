#include "LinkedQueue.h"
#include "Queue.h"

int main()
{
	Queue a;
	a.EnQueue(1);
	a.EnQueue(2);
	a.EnQueue(3);
	int t = a.DeQueue();
	int k = a.DeQueue();

	cout << t << k << a.checkFront() << endl;//

	system("pause");
	return 0;
}