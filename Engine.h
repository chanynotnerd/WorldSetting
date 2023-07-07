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

	void SpawnActor(AActor NewActor);	// Actor�� ����� ���

protected:		// private�� ���� ���°Ŵϱ� ������� �� �༭ protected�� ���ִ°�.
	void Input();
	void Tick();
	void Render();
	/*
	public : ��� �ƹ��� ����
	protected : ��� ������ ����
	private : ��� ���� ����
	*/

	vector<AActor> Actors;	// Vector�� Ŭ������ Ÿ���� ������ ��ü�� �����. �̸� �迭ó�� �� �� �ְ� �迭�� ������ ���������� �߰��� �����ϴ�.
	
	bool blsRunning = true;
};

