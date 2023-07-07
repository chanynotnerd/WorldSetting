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

	void SpawnActor(AActor NewActor);	// Actor를 만드는 상수

protected:		// private는 나만 쓰는거니까 상속으로 못 줘서 protected로 해주는것.
	void Input();
	void Tick();
	void Render();
	/*
	public : 상속 아무나 접근
	protected : 상속 가족만 접근
	private : 상속 나만 접근
	*/

	vector<AActor> Actors;	// Vector가 클래스의 타입을 가지고 객체를 만든다. 이를 배열처럼 쓸 수 있고 배열의 갯수를 유동적으로 추가가 가능하다.
	
	bool blsRunning = true;
};

