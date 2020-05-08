void draw(int tries){
    const char lineVert[] = "|";
    const char lineHor[] = "_______________";

    mvprintw(1, 5, lineVert);
    mvprintw(2, 5, lineVert);
    mvprintw(3, 5, lineVert);
    mvprintw(4, 5, lineVert);
    mvprintw(5, 5, lineVert);
    mvprintw(6, 5, lineVert);
    mvprintw(7, 5, lineVert);
    mvprintw(0, 6, lineHor);
    mvprintw(1, 20, lineVert);

    switch(tries){
            case 6:
                mvprintw(2, 20, "O");
                break;
            case 5:
                mvprintw(2, 20, "O");
                mvprintw(3, 20, "|");
                mvprintw(4, 20, "|");
                break;
            case 4:
                mvprintw(2, 20, "O");
                mvprintw(3, 20, "|");
                mvprintw(4, 20, "|");
                mvprintw(3, 21, "\\");
                break;
            case 3:
                mvprintw(2, 20, "O");
                mvprintw(3, 20, "|");
                mvprintw(4, 20, "|");
                mvprintw(3, 21, "\\");
                mvprintw(3, 19, "/");
                break;
            case 2:
                mvprintw(2, 20, "O");
                mvprintw(3, 20, "|");
                mvprintw(4, 20, "|");
                mvprintw(3, 21, "\\");
                mvprintw(3, 19, "/");
                mvprintw(5, 19, "/");
                break;
            case 1:
                mvprintw(2, 20, "O");
                mvprintw(3, 20, "|");
                mvprintw(4, 20, "|");
                mvprintw(3, 21, "\\");
                mvprintw(3, 19, "/");
                mvprintw(5, 19, "/");
                mvprintw(5, 21, "\\");
                break; 
        }
}
