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
	virtual void Tick() = 0;	// �ڽĿ��� Tick�̶� �Լ��� ���� �� �����ϱ� virtual�� ���ش�.
								// =0�� �ٿ��ָ� ���� �����Լ��� �Ǿ� AActor���� Tick()�� ���� ���ص� �Ǵµ� ��ӹ��� �ֵ鿡�� �� �������.
	void Render();

};

