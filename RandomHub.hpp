#pragma once

# include <cstdlib>
# include <ctime>
# include <iostream>
# include <thread>
# include <chrono>
# include <cctype>
# include <random>

# define RESET "\e[0m"
# define RED "\e[0;31m"

void	cleanLine();
void	cleanLastLine();
void	drawTitle();
void	intro();
void	gameMenu();
void	guessNumberMenu();

bool	isAllDigit(std::string &input);
bool	validateInput(int parse, std::string &input);

void	guessNumber();
void	coinFlip();
void	rollDice(std::random_device&);
