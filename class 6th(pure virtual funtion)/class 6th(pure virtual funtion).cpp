#include <iostream>

using namespace std;


#pragma region 순수 가상 함수

//선언만 있고, 구현은 없는 가상 함수입니다.
class Unit
{
protected:
	int health;

public:
	Unit()
	{
		cout << "create unit " << endl;
	}
	virtual void Skill() = 0; //선언만 되어있고 정의가 되어있지 않은 함수

	virtual ~Unit()
	{
		cout << "release unit " << endl;
	}
};

class Marine : public Unit
{
public:
	Marine()
	{
		cout << "Create Marine " << endl;
	}
	virtual void Skill() override //재정의 
	{
		cout << "Steam Pack" << endl;
	}

	~Marine()
	{
		cout << "release Marine " << endl;
	}
};

class Ghost :public Unit
{
public:
	Ghost()
	{
		cout << "create ghost " << endl;
	}
	virtual void Skill() override //재정의 
	{
		cout << "lock down" << endl;
	}

	~Ghost()
	{
		cout << "release ghost" << endl;
	}
};


#pragma endregion

int main()
{
#pragma region 추상 클래스

	//순수 가상 함수를 하나라도 가지고 있는 클래스이며,
	//객체로 생성할 수 없습니다.

	//Marine marine;
	//Ghost ghost;
	//ghost.Skill();
	//
	//Unit* unit = new Marine(); 
	//unit->Skill(); //마린의 스킬을 출력 


#pragma region 가상 소멸자
	//객체가 소멸될 때 현재 참조하고 있는 객체와
	//상관없이 **모두 호출되는 소멸자**입니다.

	//Unit* createPointer = new Marine();
	//
	//delete createPointer;

	//상속된 객체가 해제될 때 하위 클래스의 소멸자가 먼저 실행되고 
	//상위 클래스의 소멸자가 실행되어야 하기 때문에
	//실행 시간에 메모리에 할당된 객체를 확인하고 차례대로 소멸시켜야 합니다.
#pragma endregion




#pragma endregion


	return 0;
}