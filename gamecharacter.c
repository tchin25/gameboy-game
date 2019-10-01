#include "gamecharacter.h"

void moveGameCharacter(GameCharacter* character, Direction d){
    //printf(d);
    switch (d)
    { //TODO: Diagonals
    case up:
        character->currentSprite = &(character->upSprite[0]);
        character->y -= MOVE_SPEED;
        break;
    case down:
        character->currentSprite = &(character->downSprite[0]);
        character->y += MOVE_SPEED;
        break;
    case right:
        character->currentSprite = &(character->rightSprite[0]);
        character->x += MOVE_SPEED;
        break;
    case left:
        character->currentSprite = &(character->leftSprite[0]);
        character->x -= MOVE_SPEED;
        break;
    }

    character->direction = d;

    set_sprite_tile(0, character->currentSprite[0]);
    set_sprite_tile(1, character->currentSprite[1]);
    set_sprite_tile(2, character->currentSprite[2]);
    set_sprite_tile(3, character->currentSprite[3]);

    move_sprite(0, character->x, character->y);
    move_sprite(1, character->x, character->y + SPRITE_SIZE);
    move_sprite(2, character->x + SPRITE_SIZE, character->y);
    move_sprite(3, character->x + SPRITE_SIZE, character->y + SPRITE_SIZE);
}
