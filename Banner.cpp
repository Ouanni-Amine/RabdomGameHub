#include "RandomHub.hpp"

void	cleanLine()
{
	std::cout << "\r\033[K";
}

void	cleanLastLine()
{
	std::cout << "\033[1A";
	std::cout << "\r";
	std::cout << "\033[K";
}

void	drawTitle()
{
	std::cout << "█▀█ ▄▀█ █▄░█ █▀▄ █▀█ █▀▄▀█   █▀▀ ▄▀█ █▀▄▀█ █▀▀ █▀   █░█ █░█ █▄▄" << std::endl;
	std::cout << "█▀▄ █▀█ █░▀█ █▄▀ █▄█ █░▀░█   █▄█ █▀█ █░▀░█ ██▄ ▄█   █▀█ █▄█ █▄█" << std::endl << std::endl;
}

void	intro()
{
	std::string loading[9] = {
		"▒▒▒▒▒▒▒▒▒▒ 0 %",
		"█▒▒▒▒▒▒▒▒▒ 10 %",
		"███▒▒▒▒▒▒▒ 25 %",
		"█████▒▒▒▒▒ 50 %",
		"███████▒▒▒ 75 %",
		"▒▒▒▒▒▒▒▒▒█ -10 %",
		"Chill It Was A Joke ^^",
		"██████████ 100 %",
		"ᴄᴏᴍᴘʟᴇᴛᴇ!"
	};
	for (int i = 0; i < 9; i++)
	{
		cleanLine();
		std::cout << loading[i] << std::flush;
		if (i != 5 && i != 6)
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
		else
			std::this_thread::sleep_for(std::chrono::seconds(2));

	}
	// cleanLine();
}

void	gameMenu()
{
	std::cout << "\nChoose a game:\n";
	std::cout << "1. Guess the Number\n";
	std::cout << "2. Coin Flip\n";
	std::cout << "3. Roll Dice\n";
	std::cout << "4. Exit\n";
	std::cout << "Enter option: " << std::flush;
}

void	guessNumberMenu()
{
	system("clear");
	std::cout << "Pls choose lvl mode:\n";
	std::cout << "1. Hard [1 -> 100]\n";
	std::cout << "2. Medium [1 -> 50]\n";
	std::cout << "3. Easy [1 -> 10]\n";
	std::cout << "4. Back to home page\n";
	std::cout << "enter choice: " << std::flush;

}
