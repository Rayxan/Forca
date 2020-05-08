State update(State state, int *tries){
    int left = 0, hits = 0, c;

    if(state  == STARTING)
        return RUNNING;

    c = getch();

    if(c < 'a' || c > 'z' || uppercase[c - 'a'] == '*')
        return WAITING;

    uppercase[c - 'a'] = '*';

    for(i = 0; word[i]; ++i){
        if(!found[i] && word[i] == toupper(c)){
            ++hits;
            found[i] = 1;
        }

        left += (!found[i] ? 1 : 0);
    }

    if(left == 0)
        return VICTORY;
    else if(hits == 0)
        *tries -= 1;

    if(*tries == 0)
        return GAME_OVER;

    return RUNNING;
}