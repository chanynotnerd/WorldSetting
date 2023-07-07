#include "Actor.h"
#include <iostream>
#include <windows.h>
using namespace std;

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Input()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{

	COORD Cur;	// 윈도우 헤더파일로 원하는 위치에 출력
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << Shape;
}
