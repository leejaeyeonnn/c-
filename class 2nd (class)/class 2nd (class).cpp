#include <iostream>
using namespace std;
namespace A
{
	int data = 10;


	void Function()
	{
		cout << "A의 기능" << endl;
	}
}

namespace B
{
	int data = 20;
}

class Unit
{
#pragma region 접근 지정자
	//클래스 내부의 포함되어 있는 속성에 접근 범위를
	//제한하는 지정자입니다.

	//public: 클래스 외부에서 데이터를 접근할 수 있도록 
	//		  허용하는 접근 지정자입니다. 

	//protected: 클래스 내부와 자기가 상속하고 있는 클래스에게만
	//			 접근을 허용하는 접근 지정자입니다.

	//private: 클래스 내부에서만 접근을 허용하는 접근 지정자입니다. 
			   //ex)음량 같은 경우에 0~100까지만 사용할 수 있게 제한해둔 상태다

#pragma endregion


private:
	int health = 100;
	double defence = 5.5;

public:
	void Move()
	{
		cout << "Unit Move" << endl;
	}

	void Information() const
	{
		cout << "Health: " << health << std::endl;
		cout << "Defence: " << defence << endl;
	}
};

int main()
{
#pragma region 이름 공간 (namespace)
	//속성을 구분할 수 있도록 유효 범위를
	//설정하는 영역입니다.

	//cout << "A namespace에 있는 data값: " << A::data << endl;
	//cout << "B namespace에 있는 data 값: " << B::data << endl;

#pragma endregion

#pragma region 범위 기반 반복문

	//int list[5] = { 10, 20, 30, 40, 50 };
	//
	//for (const int & element : list) //값을 바꿔도 에러가 나지 않도록 const 레퍼런스 상수화를 시켜준다
	//{
	//	cout << element << endl;
	//}

#pragma endregion

#pragma region 클래스 (class)
	//사용자 정의 데이터 유형으로 속성과 함수가
	//포함되어 있으며, 클래스를 통해 객체를 생성하여
	//접근하고 사용할 수 있는 집합체입니다.

	//Unit unit;
	//
	//cout << "Unit class의 크기: " << sizeof(Unit) << endl;  
	////4바이트만큼 패딩이 일어났다 
	//
	//unit.Move();
	//
	//unit.Information();

	//클래스의 경우 클래스 내부에 있는 변수는 
	// 클래스의 메모리 영역에 포함되지만, 
	// 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않습니다.
#pragma endregion

	return 0;
}