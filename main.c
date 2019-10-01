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
    ericChar.direction = down;

    set_sprite_data(0, 31, Eric);
    set_sprite_tile(0, 0);
    ericChar.downSprite[0] = (UBYTE) 0;
    set_sprite_tile(1, 1);
    ericChar.downSprite[1] = (UBYTE) 1;
    set_sprite_tile(2, 2);
    ericChar.downSprite[2] = (UBYTE) 2;
    set_sprite_tile(3, 3);
    ericChar.downSprite[3] = (UBYTE) 3;
    ericChar.currentSprite = &ericChar.downSprite[0];
    ericChar.upSprite[0] = (UBYTE) 8;
    ericChar.upSprite[1] = (UBYTE) 9;
    ericChar.upSprite[2] = (UBYTE) 10;
    ericChar.upSprite[3] = (UBYTE) 11;

    ericChar.rightSprite[0] = (UBYTE) 16;
    ericChar.rightSprite[1] = (UBYTE) 17;
    ericChar.rightSprite[2] = (UBYTE) 18;
    ericChar.rightSprite[3] = (UBYTE) 19;

    ericChar.leftSprite[0] = (UBYTE) 24;
    ericChar.leftSprite[1] = (UBYTE) 25;
    ericChar.leftSprite[2] = (UBYTE) 26;
    ericChar.leftSprite[3] = (UBYTE) 27;

    move_sprite(0, 16, 16);
    move_sprite(1, 16, 24);
    move_sprite(2, 24, 16);
    move_sprite(3, 24, 24);
}