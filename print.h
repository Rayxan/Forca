#include "draw.h"

void print(int tries, State state){// imprime o jogo
    const char header[] = "Descubra a palavra secreta: ";
    
    clear();//limpa o terminal

    draw(tries);//desenha o boneco

    mvprintw(8, 2, header); //coloca a mensagem do header na 8° linha e 2° coluna

    for(i = 0; word[i]; ++i){//transforma caracteres da palavra em negrito
        addch(' ');
        found[i] ? addch(word[i] | A_BOLD) : addch(' ');
    }

    mvprintw(10, 0, "Chances restantes: %d", tries);
    mvprintw(11, 0, "letras disponíveis:");

    for(i = 0; uppercase[i]; ++i){
        if(uppercase[i] != '*')
            printw(" %c", uppercase[i]);
    }

    mvprintw(11, 0, "Digite uma das letras disponíveis: ");

    if(state == VICTORY)
        mvprintw(13, 10, "Você descobriu a palavra secreta!");
    else if(state == GAME_OVER)
        mvprintw(13, 10, "Game Over!");

    refresh();//printa a tela novamente
}
