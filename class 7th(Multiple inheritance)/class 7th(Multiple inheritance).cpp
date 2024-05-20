#include <iostream>
#include "Computerr.h"
using namespace std;

class Food
{
public: 
	Food()
	{
		cout << "create food" << endl;
	}
};

class Meat : public virtual Food
{
public:
	Meat()
	{
		cout << "create meat" << endl;
	}
};

class Vegetable : public virtual Food
{
public:
	Vegetable()
	{
		cout << "create vegetable" << endl;
	}
};

class Hamburger : public virtual Food 
{
public:
	Hamburger()
	{
		cout << "create hamburger" << endl;
	}
};

int main()
{
#pragma region 다중 상속

	//하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는 것입니다.

	//Computerr computer;
	//computer.Use();

	//다중 상속은 여러 개의 상위 클래스에 중복되는 속성이
	//존재할 수 있기 때문에 범위 지정 연산자를 통해 상위 클래스의
	//이름을 선언하고 속성을 사용합니다.
#pragma endregion

#pragma region 가상 상속




#pragma endregion


}

