#pragma once
#include "TurnstileState.h"

class Violation : public TurnstileState
{
public:
	Violation()
	{
		number = VIOLATION;
	}
	int Coin()
	{
		return VIOLATION;
	}

	int Pass()
	{
		return VIOLATION;
	}
	int Reset()
	{
		return RESET;
	}
	int Ready()
	{
		return LOCKED;
	}
};

