#pragma once
#include <vector>
#include "Actor.h"

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Run();

	void SpawnActor(AActor* NewActor);	// Actor�� ����� ���

protected:		// private�� ���� ���°Ŵϱ� ������� �� �༭ protected�� ���ִ°�.
	void Input();
	void Tick();
	void Render();
	/*
	public : ��� �ƹ��� ����
	protected : ��� ������ ����
	private : ��� ���� ����
	*/

	vector<AActor*> Actors;	// Vector�� Ŭ������ Ÿ���� ������ ��ü�� �����. �̸� �迭ó�� �� �� �ְ� �迭�� ������ ���������� �߰��� �����ϴ�.
							// Vector�� Ÿ���� AActor�� �����͹迭�� �����.
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
	
	bool blsRunning = true;
};

