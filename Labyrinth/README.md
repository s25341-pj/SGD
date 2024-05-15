# Labyrinth Game

This is a simple game project developed using C++ and the SDL (Simple DirectMedia Layer) library. The game simulates a player navigating through a labyrinth while avoiding collisions with walls and reaching the goal.

## Installation

To run this game, you need to have SDL installed on your system. You can download SDL from the [official SDL website](https://www.libsdl.org/download-2.0.php) and follow the installation instructions provided.

Once SDL is installed, you can clone this repository and compile the project using CMake:

git clone <repository-url>
cd <repository-directory>
cmake .
make

After compilation, you can run the executable generated to start the game.

## Gameplay

- Use the arrow keys to control the player character.
- Navigate through the maze, avoiding collision with walls.
- Reach the green goals to win the game.

## Files

- `CMakeLists.txt`: CMake configuration file for building the project.
- `main.cpp`: Main source file containing the game logic.
- `walls.h`: Header file defining the walls of the labyrinth.
- `goals.h`: Header file defining the goals of the game.

## Credits

This project was created by Dawid Feister.