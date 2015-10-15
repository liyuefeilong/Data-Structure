#include "Stack.h"
#include "LinkedStack.h"

int main()
{
	stack a;
	a.push(4);
	a.push(5);
	a.push(6);

	cout << "The pop number is: " << a.pop() << " " << a.pop() << " " << a.pop() << endl;

	LinkedStack b;
	b.push(1);
	b.push(2);
	b.push(3);
	cout << "The pop number is: " << b.pop() << " " << b.pop() << " " << b.pop() << endl;

	system("pause");
	return 0;
}