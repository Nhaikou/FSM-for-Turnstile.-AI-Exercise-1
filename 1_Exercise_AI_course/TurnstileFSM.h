#pragma once
#include "TurnstileState.h"
#include "LockedState.h"
#include "UnlockedState.h"
#include "Violation.h"
#include "TurnstileGate.h"


class TurnstileFSM	// Finite state machine
{
public:
	TurnstileFSM()
	{
		currentGate = new TurnstileGate();
		currentState = new LockedState();
	}

	void setState(TurnstileState *currentState)
	{
		this->currentState = currentState;
	}

	TurnstileState* getState()
	{
		return currentState;
	}

	void FSM(int state)
	{
		switch (state)
		{
		case LOCKED:
		{
			currentGate->Lock();
			currentState = new LockedState();
			break;
		}
		case UNLOCKED:
		{
			currentGate->Unlock();
			currentState = new UnlockedState();
			break;
		}
		case VIOLATION:
		{
			currentState = new Violation();
			break;
		}
		case ALARM:
		{
			currentGate->Alarm();
			currentState = new Violation();
			break;
		}
		case RESET:
		{
			currentGate->ResetAlarm();
			currentState = new LockedState();
			break;
		}
		default:
			break;
		}
	}

	void Coin()
	{
		FSM(currentState->Coin());
	}
	void Pass()
	{
		FSM(currentState->Pass());
	}
	void Reset()
	{
		FSM(currentState->Reset());
	}
	void Ready()
	{
		FSM(currentState->Ready());
	}
	
	virtual~TurnstileFSM()
	{
		delete currentGate;
		delete currentState;
	}
private:
	TurnstileState *currentState;
	TurnstileGate *currentGate;
};

