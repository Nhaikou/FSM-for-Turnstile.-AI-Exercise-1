#pragma once
#include "TurnstileState.h"

class UnlockedState : public TurnstileState
{
public:
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

