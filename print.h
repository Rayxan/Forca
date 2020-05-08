void print(int tries, State state){// imprime o jogo
    const char header[] = "Descubra a palavra secreta: ";

    clear();//limpa o terminal

    mvprintw(1, 2, header); //coloca a mensagem do header na 1° linha e 2° coluna

    for(i = 0; word[i]; ++i){//transforma caracteres da palavra em negrito
        addch(' ');
        found[i] ? addch(word[i] | A_BOLD) : addch(' ');
    }

    mvprintw(3, 0, "Chances restantes: %d", tries);
    mvprintw(4, 0, "letras disponíveis:");

    for(i = 0; uppercase[i]; ++i){
        if(uppercase[i] != '*')
            printw(" %c", uppercase[i]);
    }

    mvprintw(6, 0, "Digite uma das letras disponíveis: ");

    if(state == VICTORY)
        mvprintw(8, 10, "Você descobriu a palavra secreta!");
    else if(state == GAME_OVER)
        mvprintw(8, 10, "Game Over!");

    refresh();//printa a tela novamente
}