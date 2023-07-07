#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <conio.h>	// _getch() ���� ����

Engine* Engine::Instance = nullptr;	// EngineŬ������ Instance�� EngineŬ�����������̰�, nullptr�̴�.

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
	KeyCode = _getch();	// Ű�ڵ带 �Է¹���.
}

void Engine::Tick()
{
	// ranged for, Available since C++11
	for (auto Current : Actors)	// ���� �迭�� Current�� �־��־�
	{
		APlayer* Player = dynamic_cast<APlayer*>(Current);	// downcasting, ����ȯ�ϱ�.
		// Monster�� �����������, Player�� ���� ��������.
		/*
		if (Player != nullptr)	// �÷��̾ �����Ѵٸ�?
		{
			Player->X++;	// ���������� ��� �̵�
		}
		*/
		/*
		AMonster* Monster = dynamic_cast<AMonster*>(Current);
		if (Monster != nullptr)
		{
			Monster->Y++;
		}
		*/
		Current->Tick();	// �ִ� Current�� ������ Tick�� ȣ��
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
