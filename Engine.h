#pragma once
#include <vector>	// Vector �迭 ���� ����
#include "Actor.h"


using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Run();

	void SpawnActor(AActor* NewActor);	// Actor�� ����� ���
	
	static Engine* Instance;

	inline int GetKeyCode() { return KeyCode; }	// inline�� ������ ������ �� ����ȭ�� ����. ���� cpp���� ���� �����൵ �ȴ�.

protected:		// private�� ���� ���°Ŵϱ� ������� �� �༭ protected�� ���ִ°�.
	int KeyCode;	// �Է°��� Input()���� �ҷ���������
	void Input();
	void Tick();
	void Render();


	vector<AActor*> Actors;	// Vector�� Ŭ������ Ÿ���� ������ ��ü�� �����. �̸� �迭ó�� �� �� �ְ� �迭�� ������ ���������� �߰��� �����ϴ�.
							// Vector�� Ÿ���� AActor�� �����͹迭�� �����.

	bool blsRunning = true;
};


#define GEngine	Engine::Instance	// define���� ������ ������. Instance�� ���� GEngine���� ���� ����.

/*
public : ��� �ƹ��� ����
protected : ��� ������ ����
private : ��� ���� ����
*/

/*
	vector�� �迭�� �״�� ����� ��.
	vector<int> Korean;		// vector�� �迭�� Ÿ���� ���� �������� �ʾ� �׳� ���ָ� �ȴ�.
							// �����迭�̶� �ڿ��ٰ� �׳� �ٿ��ָ� �ȴ�.
	int Number;
	cin >> Number;
	Korean.puch_back(0);
	Korean.puch_back(1);
	Korean.puch_back(2);
	Korean.puch_back(3);	// �̷��� �迭�� ���� ��� �ٿ��ָ� ũ�⸦ �ø���.

	cout << Korean.size() << endl;	// ����� 4

	for(int i = 0; i < Korean.size(); ++i)
	{
		cout << Korean[i] << ", ";
	}	// �迭 �� �� ���� ��.




	for(int i = 0; i < Number; ++i)
	{
		Korean.push_back(i);
	}	// Korean �迭�� Number���� �Է��� ��ŭ �ִ´�.


	Korean.erase(find(Korean.begin, Korean.end(), 3));	// Korean�� �迭���� �迭�� ó������ �迭�� ������ 3�̶� ���� ã�� �����.


*/

/*
	Overload : �� �Լ��� ���� �̸��� ���� ������ ������ ���� �ڷ����� �ٸ� ���
	Override : �θ��� �Լ��� �ڽ��� ������
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
	template<typename T, typename Y>	// T�� �׳� ����
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
		IntFloatArray.Data1	// int��
		IntFloatArray.Data2 // float��

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