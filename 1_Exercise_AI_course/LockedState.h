#pragma once
#include "TurnstileState.h"

class LockedState : public TurnstileState
{
public:

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

