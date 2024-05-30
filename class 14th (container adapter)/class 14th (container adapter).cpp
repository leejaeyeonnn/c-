#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
#pragma region 컨테이너 어댑터
	//기존의 컨테이너의 인터페이스를 제한하여 만든 기능이
	//제한되거나 변형되어있는 컨테이너입니다.

#pragma region stack

	//std::stack<int> stack;
	//
	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//stack.push(50);
	//
	//stack.pop(); 
	//
	//cout << "stack의 size: " << stack.top() << endl;
	//cout << "Stack의 size: " << stack.size() << endl;
	//cout << "stack의 empty: " << stack.empty() << endl;
	//
	//while(stack.empty()==false)
	//{
	//	cout << stack.top() << " ";
	//	stack.pop();
	//}

#pragma endregion

#pragma region Queue

	//std::queue<int> queue;
	//
	//queue.push(10); //[10]
	//queue.push(20);//[10][20]
	//queue.push(30);//[10][20][30]
	//queue.push(40);//[10][20][30][40]
	//queue.push(50);//[10][20][30][40][50]
	//
	//queue.pop();//[20][30][40][50]
	//
	//cout << "Queue의 front값: " << queue.front() << endl;
	//cout << "Queue의 size값: " << queue.size() << endl;
	//cout << "Queue의 empty값: " << queue.empty() << endl;
	//
	//int size = queue.size();
	//
	//for (int i = 0; i < size; i++)
	//{
	//	cout << queue.front() << " ";
	//
	//}
	//

#pragma endregion

#pragma region Priority Queue

	//std::priority_queue<int> priorityQueue;
	//
	//priorityQueue.push(10);
	//priorityQueue.push(99);
	//priorityQueue.push(2);
	//priorityQueue.push(5);
	//priorityQueue.push(11);
	//
	//while (priorityQueue.empty() == false)
	//{
	//	cout << priorityQueue.top() << endl;
	//	priorityQueue.pop();
	//}
	//


#pragma endregion

#pragma endregion

}