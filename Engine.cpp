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
	for (auto Current : Actors)
	{
		Current->Tick();
	}
}

void Engine::Render()
{
	for (auto Current : Actors)
	{
		Current->Render();
	}
}

