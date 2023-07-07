#include "Engine.h"

Engine::Engine()
{
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
}

void Engine::Tick()
{
	// ranged for, Available since C++11
	for (auto Current : Actors)	// 액터 배열을 Current에 넣어주어
	{
		Current->Tick();	// 있는 Current를 가지고 Tick을 호출
	}
}

void Engine::Render()
{
	for (auto Current : Actors)
	{
		Current->Render();
	}
}

