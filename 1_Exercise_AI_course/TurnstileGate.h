#pragma once
#include "TurnstileState.h"

class TurnstileGate : public TurnstileState
{
public:

	void Lock()
	{
		std::cout << "Gate is now locked" << std::endl;
	}
	void Unlock()
	{
		std::cout << "Gate is now unlocked" << std::endl;
	}
	void Alarm()
	{
		std::cout << "ALARM TRIGGERED!" << std::endl;
	}
	void ResetAlarm()
	{
		std::cout << "Alarm reset...." << std::endl;
		Lock();
	}
};

