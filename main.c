#include "main.h"
#include "gamecharacter.h"
#include "eric.c"
// #include "Test.c"

GameCharacter ericChar;

void main(){
    setupEric();
    
    SHOW_SPRITES;
    DISPLAY_ON;

    while (1){
        if(joypad()){
        moveGameCharacter(&ericChar, joypad());
        performantDelay(5);
        //delay(100);
        }
    }
}

void setupEric() {
    ericChar.x = (UINT8) 16;
    ericChar.y = (UINT8) 16;
    ericChar.height = (UINT8) 16;
    ericChar.width = (UINT8) 16;


    set_sprite_data(0, 31, Eric);
    set_sprite_tile(0, 0);
    ericChar.spritIds[0] = (UBYTE) 0;
    set_sprite_tile(1, 1);
    ericChar.spritIds[1] = (UBYTE) 1;
    set_sprite_tile(2, 2);
    ericChar.spritIds[2] = (UBYTE) 2;
    set_sprite_tile(3, 3);
    ericChar.spritIds[3] = (UBYTE) 3;
    move_sprite(0, 16, 16);
    move_sprite(1, 16, 24);
    move_sprite(2, 24, 16);
    move_sprite(3, 24, 24);
}