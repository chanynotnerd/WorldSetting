#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <conio.h>	// _getch() 쓰기 위해

Engine* Engine::Instance = nullptr;	// Engine클래스의 Instance은 Engine클래스포인터이고, nullptr이다.

Engine::Engine()
{
	Instance = this;
}

Engine::~Engine()
{
	for (auto Current : Actors)
	{
		delete Current;
	}

	Actors.clear();
}

// BeginPlay
void Engine::Run()
{
	while (blsRunning) {
		Input();
		Tick();
		Render();
	}
}

void Engine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

void Engine::Input()
{
	KeyCode = _getch();	// 키코드를 입력받음.
}

void Engine::Tick()
{
	// ranged for, Available since C++11
	for (auto Current : Actors)	// 액터 배열을 Current에 넣어주어
	{
		APlayer* Player = dynamic_cast<APlayer*>(Current);	// downcasting, 형변환하기.
		// Monster면 비어있을꺼고, Player면 값이 있을것임.
		/*
		if (Player != nullptr)	// 플레이어가 존재한다면?
		{
			Player->X++;	// 오른쪽으로 계속 이동
		}
		*/
		/*
		AMonster* Monster = dynamic_cast<AMonster*>(Current);
		if (Monster != nullptr)
		{
			Monster->Y++;
		}
		*/
		Current->Tick();	// 있는 Current를 가지고 Tick을 호출
	}
}

void Engine::Render()
{
	system("cls");

	for (auto Current : Actors)
	{
		Current->Render();
	}
}
