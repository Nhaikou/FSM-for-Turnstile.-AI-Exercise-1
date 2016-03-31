#include <iostream>
#include <Windows.h>
#include "TurnstileFSM.h"

int main()
{
	TurnstileFSM tfsm;

	bool isRunning = true;


	while (isRunning == true)
	{
		if (GetAsyncKeyState(1))
		{
			tfsm.Coin();
		}
		if (GetAsyncKeyState(2))
		{
			tfsm.Pass();
		}
		if (GetAsyncKeyState(3))
		{
			tfsm.Reset();
		}
		if (GetAsyncKeyState(4))
		{
			tfsm.Ready();
		}
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			isRunning = false;
		}
		//Sleep(1000);
	}
	system("pause");
	return 0;
}