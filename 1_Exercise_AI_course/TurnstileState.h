#pragma once
#include <iostream>
#include "TurnstileFSM.h"

enum GateState
{
	LOCKED = 1,
	UNLOCKED = 2,
	VIOLATION = 3,
	ALARM = 4,
	RESET = 5
};

class TurnstileState
{
public:
	TurnstileState()
	{
		number = 0;
	}
	TurnstileState(int number)
	{
		this->number = number;
	}
	~TurnstileState(){}
	virtual int Coin()
	{
		return 0;
	}
	virtual int Pass()
	{
		return 0;
	}
	virtual int Reset()
	{
		return 0;
	}
	virtual int Ready()
	{
		return 0;
	}
	virtual int getNumber()
	{
		return number;
	}
protected:
	int number;
};

