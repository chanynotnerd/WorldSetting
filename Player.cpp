#include "Player.h"
#include "Engine.h"
APlayer::APlayer()
{
	X = 1;
	Y = 1;
	Shape = 'P';
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	switch (GEngine->GetKeyCode())
	{
	case 'w':
		Y--;
		break;
	case 's':
		Y++;
		break;
	case 'a':
		X--;
		break;
	case 'd':
		X++;
		break;
	default:
		break;
	}
}

