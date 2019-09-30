#include "gamecharacter.h"

void moveGameCharacter(GameCharacter* character, Direction d){
    //printf(d);
    switch (d)
    { //TODO: Diagonals
    case up:
        character->y -= MOVE_SPEED;
        break;
    case down:
        character->y += MOVE_SPEED;
        break;
    case right:
        character->x += MOVE_SPEED;
        break;
    case left:
        character->x -= MOVE_SPEED;
        break;
    }

    move_sprite(character->spritIds[0], character->x, character->y);
    move_sprite(character->spritIds[1], character->x, character->y + SPRITE_SIZE);
    move_sprite(character->spritIds[2], character->x + SPRITE_SIZE, character->y);
    move_sprite(character->spritIds[3], character->x + SPRITE_SIZE, character->y + SPRITE_SIZE);
}
