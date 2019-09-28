#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include "helper.h"

enum direction {up, down, right, left};

//generical character structure: id, position, graphics, direction
typedef struct GameCharacter {
	UBYTE spritids[4]; // all characters use 4 sprites
	UINT8 x;
	UINT8 y;
	UINT8 width;
	UINT8 height;
	UINT8 direction;
} GameCharacter;

void moveGameCharacter(GameCharacter* character, UINT8 x, UINT8 y);

#endif