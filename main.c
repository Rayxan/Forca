//Compile com a flag -lcurses
#include<ncurses.h>
#include<ctype.h>
#include<stdlib.h>

/* macro definition for console clearing */
#ifdef _WIN32
# define CLEAR_SCREEN system ("cls")
#else
# define CLEAR_SCREEN puts("\x1b[H\x1b[2J")
#endif

int found[4096], i;
char word[] = "GERALT", uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
typedef enum { STARTING, RUNNING, WAITING, VICTORY, GAME_OVER } State; // estados do jogo

#include "print.h"
#include "update.h"
#include "init.h"
#include "close.h"
#include "menu.h"

int main(){
    int tries = 7;
    State state = STARTING;

    if(menu() == 1){
        init();

        while(state != VICTORY && state != GAME_OVER){
            state = update(state, &tries);
            print(tries, state);
        }

        close();
    }
        
    return 0;
}
