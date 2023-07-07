#pragma once
#include <vector>	// Vector 배열 쓰기 위해
#include "Actor.h"


using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Run();

	void SpawnActor(AActor* NewActor);	// Actor를 만드는 상수
	
	static Engine* Instance;

	inline int GetKeyCode() { return KeyCode; }	// inline을 적으면 컴파일 시 최적화를 해줌. 굳이 cpp에서 정의 안해줘도 된다.

protected:		// private는 나만 쓰는거니까 상속으로 못 줘서 protected로 해주는것.
	int KeyCode;	// 입력값을 Input()에서 불러오기위해
	void Input();
	void Tick();
	void Render();


	vector<AActor*> Actors;	// Vector가 클래스의 타입을 가지고 객체를 만든다. 이를 배열처럼 쓸 수 있고 배열의 갯수를 유동적으로 추가가 가능하다.
							// Vector로 타입을 AActor의 포인터배열로 만든다.

	bool blsRunning = true;
};


#define GEngine	Engine::Instance	// define으로 별명을 지어줌. Instance는 이제 GEngine으로 생략 가능.

/*
public : 상속 아무나 접근
protected : 상속 가족만 접근
private : 상속 나만 접근
*/

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