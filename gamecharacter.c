#include "helper.h"
#include "gamecharacter.h"

void moveGameCharacter(struct GameCharacter* character, UINT8 x, UINT8 y){
    move_sprite(character->spritids[0], x, y);
    move_sprite(character->spritids[1], x + SPRITE_SIZE, y);
    move_sprite(character->spritids[2], x, y + SPRITE_SIZE);
    move_sprite(character->spritids[3], x + SPRITE_SIZE, y + SPRITE_SIZE);
}