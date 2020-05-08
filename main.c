//Compile com a flag -lcurses
#include<ncurses.h>
#include<ctype.h>

int found[4096], i;
char word[] = "GERALT", uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
typedef enum { STARTING, RUNNING, WAITING, VICTORY, GAME_OVER } State; // estados do jogo

#include "print.h"
#include "update.h"
#include "init.h"
#include "close.h"

int main(){
    int tries = 7;
    State state = STARTING;

    init();

    while(state != VICTORY && state != GAME_OVER){
        state = update(state, &tries);
        print(tries, state);
    }

    close();
    
    return 0;
}