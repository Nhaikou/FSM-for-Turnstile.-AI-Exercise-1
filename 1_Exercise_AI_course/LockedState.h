#pragma once
#include "TurnstileState.h"

class LockedState : public TurnstileState
{
public:
	LockedState()
	{
		number = LOCKED;
	}
	int Coin()
	{
		return UNLOCKED;
	}
	int Pass()
	{
		return ALARM;
	}
	int Reset()
	{
		return 0;
	}
	int Ready()
	{
		return 0;
	}
};

