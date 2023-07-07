#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	void SetHP(int InHP)
	{
		if (InHP >= 0)
		{
			HP = InHP;
		}
	}

protected:	// �����(main)���� �ǵ��� ���ϰ�, �׸��� ����� �ֱ� ���� protected
	int HP;
};