#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;



int const QueueSize = 100;
int const stackSize = 100;
int Ýtems[QueueSize];
int Stack[stackSize];
int front, rear;
int Top = -1;
int generateNumber()
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL));
		first = false;
	}
	return 0 + rand() % (1001);
}
void ÝnsertNumber()
{
	int x = 0;
	if (rear == QueueSize - 1)
		rear = 0;

	else
		rear++;

	if (rear == front)
	{
		cout << "Queue overflow" << endl;
		exit(1);
	}
	Ýtems[rear] = x;

}

int DeleteNumber()
{
	if (front == rear)
	{
		cout << "Queue underflow" << endl;
		exit(1);
	}
	else if (front == QueueSize - 1)
		front = 0;
	else
		front++;
	return Ýtems[front];
}
void Push(int a)
{
	if (Top >= stackSize - 1)

		cout << "Stack is full.." << endl;
	else
	{
		Top++;
		Stack[Top] = a;

	}
}
void Pop(int b)
{
	if (Top <= -1)
	{
		cout << "Stack is empty..." << endl;
	}
	else {
		cout << "Value :" << Stack[Top] << "GOT deleted." << endl;
		Top--;
	}
}

void PrintQueue(int arr[])
{


	cout << "Element in the Queue are: " << endl;
	for (int i = 0; i < QueueSize; i++)
	{
		cout << Ýtems[i] << endl;

	}
}
void PrintStack(int arr[])
{


	cout << "Element in the stack are: " << endl;
	for (int i = 0; i < stackSize; i++)
	{
		cout << Stack[i] << endl;

	}
}

int main()
{
	
	cout << "Element in the Queue are: " << endl;
	for (int i = 0; i < 100; i++)
	{
		Ýtems[i] = generateNumber();
	}
	ÝnsertNumber();
	//DeleteNumber();
	PrintQueue(Ýtems);

	
	for (int i = 0; i < 100; i++)
	{
	   Stack[i]= Ýtems[i];
	}

	/*Push(10);
	Pop(5);*/
	PrintStack(Stack);
	





	return 0;
}