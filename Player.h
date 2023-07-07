#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override;


protected:	// 사용자(main)에서 건들지 못하게, 그리고 상속을 주기 위해 protected
	int HP;
};