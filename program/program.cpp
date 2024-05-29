#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <list>
#include <deque>

#define UP    72
#define LEFT  75
#define RIGHT 77 
#define DOWN  80

using namespace std;

void Judgement(vector<const char*>note, const char* arrow, int& health)
{
    if (note.back() == arrow)
    {
        note.pop_back();
    }
    else
    {
        health--;
    }
}


void List()
{

}
int main()
{
#pragma region 기본 템플릿 라이브러리

#pragma region 선형 컨테이너
    // 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적
    // 인 컨테이너입니다.


#pragma region Vector
     // std::vector<int> vector;
     // 
     // vector.reserve(6);
     // 
     // cout << "vector의 capacity 값 : " << vector.capacity() << endl;
     // 
     // vector.push_back(10); // [10]
     // vector.push_back(20); // [10][20]
     // vector.push_back(30); // [10][20][30]
     // vector.push_back(40); // [10][20][30][40]
     // 
     // vector.pop_back();    // [10][20][30]
     // 
     // vector.clear();  
     // 
     // for (int i = 0; i < vector.size(); i++)
     // {
     //     cout << "vector[" << i << "]의 값 : " << vector[i] << endl;
     // }
#pragma endregion

#pragma region Rhythm Game

   //srand(time(NULL));
   //
   //std::vector<const char*> note;
   //char key = 0;
   //int count = 4;
   //int health = 5;
   //
   //note.reserve(6);
   //
   //// 1. Note를 생성합니다.
   //for (int i = 0; i < count; i++)
   //{
   //    int random = rand() % 4;
   //
   //    switch (random)
   //    {
   //    case 0: note.push_back("↑");
   //        break;
   //    case 1: note.push_back("←");
   //        break;
   //    case 2: note.push_back("→");
   //        break;
   //    case 3: note.push_back("↓");
   //        break;
   //    }
   //}
   //
   //for (const char* element : note)
   //{
   //    cout << element << " ";
   //}
   //
   //while (health > 0)
   //{
   //    key = _getch();
   //
   //    if (key == -32)
   //    {
   //        key = _getch();
   //    }
   //
   //    switch (key)
   //    {
   //    case UP: if (note.back() == "↑") { note.pop_back(); }
   //           break;
   //    case LEFT:
   //        break;
   //    case RIGHT:
   //        break;
   //    case DOWN:
   //        break;
   //    }
   //
   //}


#pragma endregion

#pragma region List

    //list.push_back(10);
    //list.push_back(20);
    //list.push_back(5);
    //list.push_back(1);
    //list.push_back(12);
    //list.push_back(10);
    //list.push_back(10);
    //
    //list.push_front(5);//
    //list.push_front(1);//
    //
    //cout << "list.front(): " << list.front() << endl;
    //cout << "list.front(): " << list.back() << endl;


#pragma endregion

#pragma region String

//std::string name = "alistar";
//
//name.append("champion");
//
//if(name.compare("alistar"))
//{
//    cout << "문자열이 같습니다" << endl;
//}
//name.clear(); 
//
//cout << "name 변수의 값: " << name << endl;
//

#pragma endregion

#pragma region Deque

//std::deque<int> deque;
//
//deque.push_front(10);
//deque.push_back(20);
//deque.push_back(30);
//deque.push_back(40);
//deque.push_back(50);
#pragma endregion


#pragma endregion




#pragma endregion



    return 0;
}
