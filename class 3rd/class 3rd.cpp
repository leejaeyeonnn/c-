#include <iostream>

#pragma region 생성자
//클래스의 인스턴스가 생성되는 시점에서 자동으로'
//호출되는 특수한 멤버 함수입니다.

class Gameobject
{
private:
	int x;
	int y;
	int z;

	int score = 0;

public:
	Gameobject()
	{
		cout << "Creat Gameobject" << endl;

	}
};


#pragma endregion


#pragma region 소멸자
//객체가 소멸될 때 자동으로 실행되는 클래스의
//멤버함수입니다.

~Gameobject()
{
	score++;
	cout << "score: " << score << endl;
	cout << "Release Gameobject" << endl;
}
//소멸자는 객체가 메모리에서 해제될 때 단 한 번만
//호출되며, 소멸자에는 매개 변수를 생성하여 사용할 수 없습니다.
#pragma endregion

//생성자의 경우 객체가 생성될 때 단 한 번만 호출되며
//생성자는 반환형이 
int Gameobject::score = 0;

class Bullet
{
private:
	int x;
	int y;

	int velocity;

public:
	Bullet(int x, int y, int velocity)
	{
		//this 포인터
		//자기 자신을 가리키는 포인터입니다.

		this->x = x;
		this->y = y;
		this->velocity = velocity;
	}

	Bullet(Bullet& clone)
	{
		cout < "Copy Constructor" << < endl;

		x = clone.x;
		y = clone.y;
		velocity = clone.velocity;
	}
	void Information()
	{
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "velocity: " << velocity << endl;
	}
};
int main()
{
#pragma region 생성자
	//Gameobject gameobject;

	//Gameobject* ptr1 = new Gameobject();
	//Gameobject* ptr2 = new Gameobject();
	//Gameobject* ptr3 = new Gameobject();
	//
	//delete ptr1;
	//delete ptr2;
	//delete ptr3;


#pragma endregion

#pragma region 복사 생성자
	//같은 객체를 복사하여 생성시킬 때 호출되는 생성자입니다.

	//Bullet bullet1(1, 1, 5);
	//
	//bullet1.Information();
	//
	//Bullet bullet2 = bullet1;

	//복사 생성자를 정의하지 않고, 객체를
	//복사하게 되면 기본 복사 생성자가
	//호출되기 때문에 얕은 복사로 객체가 복사됩니다.
#pragma endregion

	return 0;
}