#include "RandomHub.hpp"

bool	isAllDigit(std::string &input)
{
	for (int i = 0; (size_t)i < input.size(); i++)
	{
		if (!isdigit(input[i]))
			return (false);
	}
	return true;
}

bool	validateInput(int parse, std::string &input)
{
	if (parse == 1 && !isAllDigit(input))
	{
		std::cout << RED << "Invalide input\nOnly degits accepted" << RESET << std::flush;
		std::this_thread::sleep_for(std::chrono::seconds(2));
		return (false);
	}
	else if (!parse)
	{
		std::cout << RED << "Invalide option\nPlease choose form the list" << RESET << std::flush;
		std::this_thread::sleep_for(std::chrono::seconds(2));
		return (false);
	}
	return (true);
}
