#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "Actor.h"
#include <vector>	// Vector �迭 ���� ����
#include <List>		// Template ���� ���ؼ�.
#include <map>
using namespace std;

int main()
{
	Engine* MyEngine = new Engine();
	// GEngine->Run();	// static���� ���� �̷��� ���� ���൵ �ٷ� ����.

	// Loading a Data files
	MyEngine->SpawnActor(new APlayer());	// Add player
	MyEngine->SpawnActor(new AMonster());	// Add Monster

	MyEngine->Run();

	delete MyEngine;

	return 0;
}


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
 // Template�� Overload

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