#include "main.h"
#include "GameCharacter.h"
#include "Eric.c"
#include "Test.c"

GameCharacter ericChar;

void main(){
    printf("HELLO WORLD");
    setupEric();
    SHOW_SPRITES;
    DISPLAY_ON;
}

void setupEric() {
    ericChar.x = 0;
    ericChar.y = 0;
    ericChar.height = 16;
    ericChar.width = 16;

    SPRITES_8x16;

    set_sprite_data(0, 31, Eric);
    set_sprite_tile(0, 0);
    set_sprite_tile(1, 2);
    move_sprite(0, 16, 16);
    move_sprite(1, 24, 16);
}