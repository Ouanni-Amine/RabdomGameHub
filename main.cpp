#include "RandomHub.hpp"

void	gameEngine()
{
	std::string input;
	int mode;
	std::random_device dv;
	srand(time(0));

	while (1)
	{
		system("clear");
		drawTitle();
		gameMenu();
		if (!std::getline(std::cin, input))
		{
			std::cout << "\n❤❤ Thank U For Playing ❤❤\n" << std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			exit(0);
		}
		if (!validateInput(1, input))
			continue;
		mode = atoi(input.c_str());
		if (mode == 4)
		{
			std::cout << "\n❤❤ Thank U For Playing ❤❤\n" << std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			exit(0);
		}
		else if (mode == 1)
			guessNumber();
		else if (mode == 2)
			coinFlip();
		else if (mode == 3)
			rollDice(dv);
		else
			validateInput(0, input);
	}
}

int main()
{
	intro();
	gameEngine();
}
