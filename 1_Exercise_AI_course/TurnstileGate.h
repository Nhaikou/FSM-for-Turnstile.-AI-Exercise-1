#pragma once
#include "TurnstileState.h"

class TurnstileGate : public TurnstileState
{
public:

	void Lock();
	void Unlock();
	void Alarm();
	void Thankyou();
	void Thankyouoff();
	void ResetAlarm();
};

