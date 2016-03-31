#include <iostream>
#include <Windows.h>
#include "TurnstileFSM.h"

int main()
{
	TurnstileFSM tfsm;

	bool isRunning = true;

	std::cout << "\tExercise 1: TurnstileFSM" << std::endl;
	std::cout << "Press numbad buttons or ESC button for exit:" << std::endl;
	std::cout << "1. Insert coin to gate." << std::endl;
	std::cout << "2. Try to pass the gate." << std::endl;
	std::cout << "3. Try to reset the alarm." << std::endl;
	std::cout << "4. Ready??." << std::endl;
	std::cout << "5. Get state of the gate." << std::endl;
	std::cout << ">";


	while (isRunning == true)
	{
		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			if (tfsm.getState()->getNumber() == 1)
			{
				tfsm.Coin();
			}
			else if (tfsm.getState()->getNumber() == 2)
			{
				std::cout << "Thank you!" << std::endl;
			}
		}
		else if (GetAsyncKeyState(VK_NUMPAD2))
		{
			tfsm.Pass();
		}
		else if (GetAsyncKeyState(VK_NUMPAD3))
		{
			if (tfsm.getState()->getNumber() == 3)
			{
				tfsm.Reset();
			}
			else
			{
				std::cout << "There is nothing to reset..." << std::endl;
			}
		}
		else if (GetAsyncKeyState(VK_NUMPAD4))
		{
			tfsm.Ready();
		}
		if (GetAsyncKeyState(VK_NUMPAD5))
		{
			if (tfsm.getState()->getNumber() == 1)
			{
				std::cout << "It's locked." << std::endl;
			}
			else if (tfsm.getState()->getNumber() == 2)
			{
				std::cout << "Gate is open." << std::endl;
			}
			else if (tfsm.getState()->getNumber() == 3)
			{
				std::cout << "THERE IS VIOLATION IN THE GATE" << std::endl;
			}
			else
			{
				std::cout << "Something went really wrong..." << std::endl;
			}
		}
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			isRunning = false;
		}
		Sleep(100);
	}
	system("pause");
	return 0;
}