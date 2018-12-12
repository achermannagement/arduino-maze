#pragma once

const int MAX_MAZE_SIZE = 25;

enum Direction {
  NORTH,
  EAST,
  SOUTH,
  WEST,
  NONE
};

// solution to maze included in this directory
const Direction maze[] = {SOUTH, EAST, NORTH, WEST, NORTH, EAST, SOUTH, WEST, SOUTH, WEST, NORTH,
EAST, NORTH, WEST, SOUTH, EAST, NORTH, WEST, NORTH, EAST, NORTH, WEST, NORTH, EAST, SOUTH};

void maze_init(void);
void enter_dir(Direction d);
bool guess_full(void);
bool compare_guess(void);
void maze_clear(void);
Direction get_guess(int i);
