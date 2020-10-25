#include "UserInterface.h"

UserInterface::UserInterface() { }

void UserInterface::start()
{
	do
	{
		std::cout << "Available actions:\n[0] Exit\n[1] Show available algorithms\n[2] Choose algorithm\n[3] Start all algorithms" << std::endl;
		std::cout << "Choose the algorithm: " << std::endl;
		std::cin >> command_;

		if (isCommandValid(command_))

	}

	while (command_ != 0);
}

void UserInterface::showAlgorithms()
{
	std::cout << "\nAvailable algorithms:" << std::endl;

	std::cout
		<< "[0] Bubble sort"
		<< "[1] Shellsort"
		<< "[2] Shaker sort"
		/* ... */
		<< std::endl;
}

bool UserInterface::isCommandValid(int command)
{
	if (command > 3 && command < 0)
		return false;

	else
		return true;
}

int UserInterface::chooseAlgorithm()
{
	// ...

	return 0;
}

void UserInterface::startAllAlgortims()
{
	// ...
}