#include "RandomHub.hpp"

void	coinFlip()
{
	std::string input;
	int side;
	std::string sides[2] = {"HEAD", "TAIL"};
	std::string message[3]={
		"Fliping Coin .",
		"Fliping Coin ..",
		"Fliping Coin ..."
	};
	while (1)
	{
		system("clear");
		for (int i = 0; i < 3 ; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << message[j] << std::flush;
				std::this_thread::sleep_for(std::chrono::milliseconds(400));
				cleanLine();
			}
		}
		system("clear");
		side = rand() % 2;
		std::cout << "Guess the coin side (HEAD/TAIL): " << std::flush;
		if (!getline(std::cin, input) || input == "T")
			break;
		if (input != sides[0] && input != sides[1])
		{
			std::cout << RED << "Invalide option" << RESET << std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(2));
			continue;
		}
		if (input == sides[side])
		{
			std::cout << "🎉🎉 Bingooooo 🎉🎉 \nPress \"T\" to stop" << std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(5));
			continue;
		}
		else
		{
			std::cout << "Wrong it was : " << sides[side] << "\nPress \"T\" to stop"<< std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(2));
		}
	}
}
