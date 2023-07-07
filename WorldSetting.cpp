#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "Actor.h"
#include <vector>	// Vector 배열 쓰기 위해
#include <List>		// Template 쓰기 위해서.
#include <map>
using namespace std;

int main()
{
	Engine* MyEngine = new Engine();
	// GEngine->Run();	// static으로 만들어서 이렇게 선언만 해줘도 바로 생김.

	// Loading a Data files
	MyEngine->SpawnActor(new APlayer());	// Add player
	MyEngine->SpawnActor(new AMonster());	// Add Monster

	MyEngine->Run();

	delete MyEngine;

	return 0;
}


/*
	vector는 배열을 그대로 만드는 것.
	vector<int> Korean;		// vector는 배열의 타입이 따로 정해지지 않아 그냥 써주면 된다.
							// 가변배열이라 뒤에다가 그냥 붙여주면 된다.
	int Number;
	cin >> Number;
	Korean.puch_back(0);
	Korean.puch_back(1);
	Korean.puch_back(2);
	Korean.puch_back(3);	// 이렇게 배열의 값을 계속 붙여주며 크기를 늘린다.

	cout << Korean.size() << endl;	// 결과는 4

	for(int i = 0; i < Korean.size(); ++i)
	{
		cout << Korean[i] << ", ";
	}	// 배열 값 다 나올 것.




	for(int i = 0; i < Number; ++i)
	{
		Korean.push_back(i);
	}	// Korean 배열에 Number값을 입력한 만큼 넣는다.


	Korean.erase(find(Korean.begin, Korean.end(), 3));	// Korean의 배열에서 배열의 처음부터 배열의 끝까지 3이란 값을 찾아 지운다.


*/

/*
	Overload : 두 함수가 같은 이름을 갖고 있지만 인자의 수나 자료형이 다른 경우
	Override : 부모의 함수를 자식이 재정의
*/

/*
 // Template는 Overload

template<typename T>
T Add(T A, T B)
{
	return A+B
}

int main()
{
	cout << Add<float>(3.0f, 1.2f) << endl;
	cout << Add<int>(3, 5) << endl;
	cout << Add<char>('A', 'B') << endl;
}
*/

/*
	template<typename T, typename Y>	// T는 그냥 변수
	class Array
	{
	public:
		T Data1[10];
		Y Data2[20];
	}

	int main()
	{
		Array<int> IntArray;
		Array<float> Floatarray;

		Array<int,float> IntFloatArray;
		IntFloatArray.Data1	// int형
		IntFloatArray.Data2 // float형

		vector<APlayer> PlayerList;
	}
*/

/*
	int main()
	{
		map<APlayer, AActor> IntFloatArray;
		APlayer My;
		IntFloatArray[My] = AActor
	}
*/