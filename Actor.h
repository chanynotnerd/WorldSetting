#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	int X;
	int Y;
	char Shape;

	void Input();
	virtual void Tick() = 0;	// 자식에도 Tick이란 함수가 있을 수 있으니까 virtual을 써준다.
								// =0을 붙여주면 순수 가상함수가 되어 AActor에선 Tick()을 구현 안해도 되는데 상속받은 애들에선 다 해줘야함.
	void Render();

};

