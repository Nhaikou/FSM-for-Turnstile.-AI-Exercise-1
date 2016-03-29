#pragma once
#include <iostream>
#include "TurnstileFSM.h"
#include "LockedState.h"
#include "UnlockedState.h"
#include "Violation.h"

class TurnstileState
{
public:
	TurnstileState();
	~TurnstileState();
	void Coin(TurnstileFSM *tsfsm);
	void Pass(TurnstileFSM *tsfsm);
private:
	LockedState *locked;
	UnlockedState *unlocked;
	Violation *violation;
	
};

