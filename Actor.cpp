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

	COORD Cur;	// ������ ������Ϸ� ���ϴ� ��ġ�� ���
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << Shape;
}
