#include "RandomHub.hpp"

void	guessLoop(int modulo, int mode)
{
	system("clear");
	int triesNum = 0;
	int Joker = std::rand() % modulo + 1;
	std::string input;
	int guess;
	static int bestScore[3];
	while (1)
	{
		std::cout << "Guess the number (1 - " << modulo << "):";
		if (!std::getline(std::cin, input))
			break;;
		if (input == "T")
			break;
		triesNum++;
		if (!isAllDigit(input) || (guess = atoi(input.c_str())) > modulo || guess < 1)
			std::cout << "Invalide range/input" << std::endl;
		else if (guess > Joker)
			std::cout << "That was to high!\nIf u want to stop press \"T\"" << std::endl;
		else if (guess < Joker)
			std::cout << "That was to low!\nIf u want to stop press \"T\"" << std::endl;
		else
		{
			system("clear");
			if (!bestScore[mode])
				bestScore[mode] = triesNum;
			else
				bestScore[mode] = std::min(triesNum, bestScore[mode]);
			std::cout << "🎉🎉 Bingooooo 🎉🎉" << std::endl;
			std::cout << "Found after : " << triesNum << " tries" << std::endl;
			std::cout << "Best score in this mode was : " << bestScore[mode] << " tries" << std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(5));
			break;
		}
	}
}

void	guessNumber()
{
	std::string input;
	int mode;
	int modulo;
	while (1)
	{
		guessNumberMenu();
		if (!std::getline(std::cin, input))
			break;
		if (!validateInput(1, input))
			continue;
		mode = atoi(input.c_str());
		if (mode == 4)
			break;
		else if (mode == 1)
			modulo = 100;
		else if (mode == 2)
			modulo = 50;
		else if (mode == 3)
			modulo = 10;
		else
		{
			validateInput(0, input);
			continue;
		}
		guessLoop(modulo, mode);
	}
	system("clear");
}