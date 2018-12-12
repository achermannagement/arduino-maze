#include "maze.h"

// array and index for holding the players guess
Direction guess[MAX_MAZE_SIZE];
int guess_index;

void maze_clear(void){
  guess_index = 0;
  for(int i = 0; i < MAX_MAZE_SIZE; i++){
    guess[i] = NONE;
  }
}

void maze_init(){
  maze_clear();
}

void enter_dir(Direction d){
  if(d != NONE){
    guess[guess_index] = d;
    guess_index++;
  }
}

bool guess_full(void){
  return (guess_index >= MAX_MAZE_SIZE);
}

bool compare_guess(void){
  bool win = true;
  for(int i = 0; i < MAX_MAZE_SIZE; i++){
    if(guess[i] != maze[i]){
      win = false;
    }
  }
  return win;
}

Direction get_guess(int i){
  return guess[i];
}
