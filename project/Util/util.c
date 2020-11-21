#include "../stdafx.h"

void printTextBlock(TextBlock* Tb){
    if(Tb==NULL)return;
    if(Tb->isVisible==0)return;
    move(Tb->posy,Tb->posx);
    attron(COLOR_PAIR(Tb->color));
    addstr(Tb->text);
    attroff(COLOR_PAIR(Tb->color));
}

void eraseTextBlock(TextBlock* Tb){
    move(Tb->posy,Tb->posx);
    addstr(Tb->emptytext);
}