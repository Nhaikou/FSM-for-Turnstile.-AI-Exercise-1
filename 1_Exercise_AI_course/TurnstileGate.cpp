#include "TurnstileGate.h"

void TurnstileGate::Lock()
{
	std::cout << "Gate is now locked" << std::endl;
}

void TurnstileGate::Unlock()
{
	std::cout << "Gate is now unlocked" << std::endl;
}

void TurnstileGate::Alarm()
{

}

void TurnstileGate::Thankyou()
{
	std::cout << "Thank you for visiting!" << std::endl;
}

void TurnstileGate::Thankyouoff()
{

}

void TurnstileGate::ResetAlarm()
{

}
