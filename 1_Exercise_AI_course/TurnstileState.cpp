#include "TurnstileState.h"

void TurnstileState::Coin(TurnstileFSM *tsfsm)
{
	std::cout << "Coin was given" << std::endl;
	// TODO: UNLOCK THE GATE
}

void TurnstileState::Pass(TurnstileFSM *tsfsm)
{
	std::cout << "Someone passed the gate!" << std::endl;
	// TODO: ALERT
}
