#pragma once
#include "TurnstileState.h"
#include "TurnstileGate.h"

class TurnstileState;
class TurnstileGate;
class TurnstileFSM // Finite state machine
{
public:
	TurnstileFSM();
	~TurnstileFSM();

	virtual void Coin();
	virtual void Pass();
	virtual void setState(TurnstileState *tss);

	virtual void Reset();
	virtual void Ready();
private:
	TurnstileState *currentState;
};

