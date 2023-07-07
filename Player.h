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

protected:	// 사용자(main)에서 건들지 못하게, 그리고 상속을 주기 위해 protected
	int HP;
};