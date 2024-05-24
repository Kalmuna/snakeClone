#include <stdint.h>
#include <string.h>
#include "neslib.h"

// Constants
#define SCREEN_WIDTH 32
#define SCREEN_HEIGHT 30

// Snake direction
#define DIR_UP 0
#define DIR_RIGHT 1
#define DIR_DOWN 2
#define DIR_LEFT 3

// Game state
#define STATE_INIT 0
#define STATE_PLAY 1
#define STATE_GAMEOVER 2

// Snake properties
#define MAX_SNAKE_LENGTH 128

// Variables
uint8_t game_state;
uint8_t snake_x[MAX_SNAKE_LENGTH];
uint8_t snake_y[MAX_SNAKE_LENGTH];
uint8_t snake_length;
uint8_t snake_dir;
uint8_t food_x;
uint8_t food_y;
uint16_t frame_counter;

// Function Prototypes
void init_game(void);
void update_game(void);
void draw_game(void);
void spawn_food(void);
void move_snake(void);
void check_collisions(void);

// Entry point
void main(void) {
  // Initialize the NES
  ppu_on_all();
}