<p align="center">
  <img src="https://raw.githubusercontent.com/Ouanni-Amine/Assets/main/RabdomGameHub/RabdomGameHub.gif" alt="Demo gif">
</p>

<h1 align="center">RabdomGameHub</h1>
<p align="center"></p>

📋 **Table of Contents**

- [📄 Description](#-description)
- [🛠️ Technologies Used](#%EF%B8%8F-technologies-used)
- [🔑 Key Concepts](#-key-concepts)
- [📁 Project Structure](#-project-structure)
- [⚙️ How to Compile](#%EF%B8%8F-how-to-compile)
- [🛠 How to Use](#-how-to-use)
- [🕹️ Controls / Instructions](#%EF%B8%8F-controls--instructions)

## 📄 Description

RabdomGameHub is a CLI based collection of simple games using random number generation in C++.
It uses the legacy C functions rand and srand from `<cstdlib>` and also the C++ `<random>` library.
It has 3 mini games:

GuessNumber: where u choose an interval based on 3 lvl of difficulty and u try to guess the number.

CoinFlip: u must choose whether the face of the coin is the head or the tail.

RollDice: it prompts u to choose how many dice u want and it gives u a random dice number.

## 🛠️ Technologies used

<p align="center">
  <img src="https://raw.githubusercontent.com/marwin1991/profile-technology-icons/refs/heads/main/icons/c++.png" width="60"/>
  &nbsp;&nbsp;&nbsp;
  <img src="https://img.icons8.com/color/480/git.png" width="60"/>
  &nbsp;&nbsp;&nbsp;
  <img src="https://www.gnu.org/graphics/heckert_gnu.small.png" width="60"/>
  &nbsp;&nbsp;&nbsp;
  <img src="https://raw.githubusercontent.com/marwin1991/profile-technology-icons/refs/heads/main/icons/visual_studio_code.png" width="60"/>
</p>

## 🔑 Key concepts

<b>1. Pseudo-random number generation:</b> using `<cstdlib>` (rand, srand) and the C++ `<random>` (std::random_device, std::mt19937, std::uniform_int_distribution) library.

<b>2. Delays and timing in programs:</b> using `<thread>` and  `<chrono>` libraries to control execution time.

<b>3. Terminal manipulation:</b> clearing the screen, moving the cursor, and refreshing the UI with `\r\033[K`, `\033[1A`, and `system("clear")`.

<b>4. ASCII-based UI elements:</b> creating text-based visual elements like progress bars and symbols.

## 📁 Project structure
```
├── Banner.cpp
├── CoinFlip.cpp
├── GuessNumber.cpp
├── Makefile
├── Parse.cpp
├── RandomHub.hpp
├── RollDice.cpp
└── main.cpp
```

## ⚙️ How to Compile

• Compile the programe
```
make

# This generates:
# - RabdomGameHub : the executable
# - Object files (.o) for each source file
```

• Remove object files
```
make clean
```

• Remove object files and the executable
```
make fclean
```

• Rebuild everything
```
make re
```

## 🛠 How to Use

• Run the program:
```
./RabdomGameHub
```
## 🕹️ Controls / Instructions

• Choose a number from the provided list.
• Press T if you want to exit one of the game loops.
• Press Ctrl+C or Ctrl+D to exit the game entirely.

NB: Choosing an out of range number or invalid input is already handled and parsed by the program. An error message will be shown to you.

<p align="center">
  <img src="https://raw.githubusercontent.com/Ouanni-Amine/Assets/main/Enjoy.svg" alt="Enjoy" width="200">
</p>
