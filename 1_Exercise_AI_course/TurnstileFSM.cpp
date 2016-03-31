#include "TurnstileFSM.h"


void TurnstileFSM::setState(TurnstileState *tss)
{
	tss = currentState;
}

void TurnstileFSM::Coin()
{
	std::cout << "Coin placed" << std::endl;
}

void TurnstileFSM::Pass()
{
	
}

void TurnstileFSM::Reset()
{

}

void TurnstileFSM::Ready()
{

}
