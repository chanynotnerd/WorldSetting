#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
using namespace std;

int main()
{
	Engine MyEngine;

	// Loading a Data files
	APlayer MyPlayer;
	AMonster MyMonster;
	MyMonster.X = 10;
	MyMonster.Y = 10;

	MyEngine.SpawnActor(MyPlayer);
	MyEngine.SpawnActor(MyMonster);

	MyEngine.Run();
}