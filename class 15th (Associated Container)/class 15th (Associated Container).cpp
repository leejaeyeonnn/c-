﻿#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{

#pragma region 연관 컨테이너
	//컨테이너 내의 자료들이 규칙에 따라 정렬되어 있는 컨테이너입니다.
#pragma region 반복자
	//컨테이너 내의 원소를 순회하기 위해 사용되는 도구이다.

	//std::set<int> setContainer;
	//
	//set<int> ::iterator iterator=setContainer.begin();
	//
	//setContainer.insert(50);
	//setContainer.insert(10);
	//setContainer.insert(80);
	//setContainer.insert(30);
	//setContainer.insert(65);
	//setContainer.insert(45); 
	//
	////set의 걍우 key 값이 중복이 되면 값이 그대로 들어옵니다.
	//
	//
	//for (iterator = setContainer.begin(); iterator != setContainer.end(); iterator++)
	//{
	//	cout << *iterator << endl;
	//}
	//
	//

#pragma endregion

#pragma region Map
	//std::map<string, int> mapContainer;
	//
	//mapContainer.insert({ "Sword", 1000 });
	//mapContainer.insert({ "Armor", 7500 });
	//
	//if (mapContainer.find("Sword") != mapContainer.end())
	//{
	//	cout << "Find" << endl;
	//}
	//else
	//{
	//	cout << "Not find" << endl;
	//}
	//
	//for (map<string, int>::iterator iter = mapContainer.begin();
	//	iter != mapContainer.end(); 
	//	iter++) 
	//{
	//	cout << "Key: " << iter->first << endl;
	//	cout << "VALUE: " << iter->second << endl;
	//}

#pragma endregion




#pragma endregion


	return 0;
}