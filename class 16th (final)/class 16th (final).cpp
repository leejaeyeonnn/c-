#include <iostream>

using namespace std;

class Item
{
private:
	int price;

public:
	Item(int price)
	{
		cout << "Constructor" << endl;
		this->price = price;
	}


	Item(Item& item)
	{
		cout << "Copy Constructor" << endl;
		price = item.price;
	}
};

class Card
{
public:
	virtual void Skill() = 0;
	virtual void Effect() = 0;
	virtual void Show() = 0;
};

class Legend :Card
{

};
int main()
{

#pragma region R value 와 L value 
	//L value Type
	//int data = 10;
	//
	//int& left1 = data;
	//

	//R value type
	//int count = 0;

	//int&& right1 = 10;
	//int&& right2 = count;

	//cout << "right1의 값 : " << right1 << endl;


#pragma endregion

#pragma region 복사 생략(copy elision)
	//함수의 반환 값을 모두 사용하거나 초기화하는 경우에
	//생기는 불필요한 임시 객체를 최적화하거나 제거하는데
	//사용되는 컴파일러 기술입니다.

	//Item item1(1000);
	//
	//Item item2(item1);
	//
	//Item item3(Item());

#pragma endregion

	return 0;
}