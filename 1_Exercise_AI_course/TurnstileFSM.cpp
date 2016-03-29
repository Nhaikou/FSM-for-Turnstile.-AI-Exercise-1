#include "TurnstileFSM.h"


TurnstileFSM::TurnstileFSM()
{
}

void TurnstileFSM::setState(TurnstileState *tss)
{
	tss = currentState;
}

TurnstileFSM::~TurnstileFSM()
{
}
