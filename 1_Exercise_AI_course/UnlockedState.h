#pragma once
#include "TurnstileState.h"

class UnlockedState : public TurnstileState
{
public:
	UnlockedState()
	{
		number = UNLOCKED;
	}

	int Coin()
	{
		return UNLOCKED;
	}
	int Pass()
	{
		return LOCKED;
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

