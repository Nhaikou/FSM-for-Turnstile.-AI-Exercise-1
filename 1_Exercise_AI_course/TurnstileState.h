#pragma once
#include <iostream>
#include "TurnstileFSM.h"
#include "LockedState.h"
#include "UnlockedState.h"
#include "Violation.h"

class TurnstileState
{
public:
	void Coin(TurnstileFSM *tsfsm);
	void Pass(TurnstileFSM *tsfsm);
};

