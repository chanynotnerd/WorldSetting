#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
using namespace std;

int main()
{
	Engine* MyEngine = new Engine();

	// Loading a Data files
	MyEngine->SpawnActor(new APlayer());
	MyEngine->SpawnActor(new AMonster());

	MyEngine->Run();

	delete MyEngine;
}