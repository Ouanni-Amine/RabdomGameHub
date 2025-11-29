#include "RandomHub.hpp"

static void helper()
{
	std::string message[3] = {
		"Rolling Dices .",
		"Rolling Dices ..",
		"Rolling Dices ..."};
	system("clear");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << message[j] << std::flush;
			std::this_thread::sleep_for(std::chrono::milliseconds(400));
			cleanLine();
		}
	}
	system("clear");
}

static void draw(int *val, int &numOfDicies, int sum)
{
	std::string input;
	static int best_sum;
	const std::string dice[6][5] = {
		{"╔═══════╗",
		 "║       ║",
		 "║   ●   ║",
		 "║       ║",
		 "╚═══════╝"},
		{"╔═══════╗",
		 "║ ●     ║",
		 "║       ║",
		 "║     ● ║",
		 "╚═══════╝"},
		{"╔═══════╗",
		 "║ ●     ║",
		 "║   ●   ║",
		 "║     ● ║",
		 "╚═══════╝"},
		{"╔═══════╗",
		 "║ ●   ● ║",
		 "║       ║",
		 "║ ●   ● ║",
		 "╚═══════╝"},
		{"╔═══════╗",
		 "║ ●   ● ║",
		 "║   ●   ║",
		 "║ ●   ● ║",
		 "╚═══════╝"},
		{"╔═══════╗",
		 "║ ●   ● ║",
		 "║ ●   ● ║",
		 "║ ●   ● ║",
		 "╚═══════╝"}};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < numOfDicies; j++)
		{
			std::cout << dice[val[j] - 1][i] << "   ";
		}
		std::cout << std::endl;
	}
	if (best_sum == 0 || sum > best_sum)
		best_sum = sum;
	std::cout << "Total: " << sum << std::endl;
	std::cout << "Best Total: " << best_sum << std::endl;
 	while (1)
	{
		std::cout << "Enter \"T\" to go back: " << std::flush;
		if (!std::getline(std::cin, input))
			return;
		else if (input == "T")
			break;
		else
		{
			std::cout << RED << "Invalide option" << RESET << std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(2));
			cleanLine();
			cleanLastLine();
		}
	}
}

void rollDice(std::random_device &dv)
{
	std::string input;
	int numOfDices;
	while (1)
	{
		system("clear");
		int sum = 0;
		std::cout << "How many dices u want (press \"T\" to back): " << std::flush;
		if (!std::getline(std::cin, input))
			break;
		else if (input == "T")
			break;
		else if (!validateInput(1, input))
			continue;
		numOfDices = atoi(input.c_str());
		if (numOfDices < 1 || numOfDices > 5)
		{
			std::cout << RED << "U can oly choose between 1 - 5" << RESET << std::flush;
			std::this_thread::sleep_for(std::chrono::seconds(2));
			continue;
		}
		int val[numOfDices];
		std::mt19937 rd(dv());
		std::uniform_int_distribution<> dist(1, 6);
		for (int i = 0; i < numOfDices; i++)
		{
			val[i] = dist(rd);
			std::cout << val[i] << std::endl;
			sum+= val[i];
		}
		helper();
		draw(val, numOfDices, sum);
	}
}
