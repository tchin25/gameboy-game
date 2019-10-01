#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include "helper.h"

#define MOVE_SPEED 2

typedef enum Direction {up = J_UP, down = J_DOWN, right = J_RIGHT, left = J_LEFT} Direction;

//generical character structure: id, position, graphics, direction
typedef struct GameCharacter {
	UBYTE* currentSprite;
	UBYTE upSprite[4];
	UBYTE downSprite[4]; // all characters use 4 sprites
	UBYTE rightSprite[4];
	UBYTE leftSprite[4];
	UINT8 x;
	UINT8 y;
	UINT8 width;
	UINT8 height;
	Direction direction;
	UINT8 animState;
} GameCharacter;

void moveGameCharacter(GameCharacter* character, Direction);

#endif