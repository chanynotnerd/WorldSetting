#include "Engine.h"

Engine::Engine()
{
}

Engine::~Engine()
{
}

void Engine::Run()
{
	while (blsRunning) {
		Input();
		Tick();
		Render();
	}
}

void Engine::SpawnActor(AActor NewActor)
{
	Actors.push_back(NewActor);
}

void Engine::Input()
{
}

void Engine::Tick()
{
	// 둘다 같은 for문
	for (int i = 0; i < Actors.size(); ++i)
	{
		Actors[i].Tick();
	}

	// ranged for, Available since C++11
	for (AActor Current : Actors)
	{
		Current.Tick();
	}

	for (auto Current : Actors)
	{
		Current.Tick();
	}
}

void Engine::Render()
{
	for (int i = 0; i < Actors.size(); ++i)
	{
		Actors[i].Render();
	}
}

