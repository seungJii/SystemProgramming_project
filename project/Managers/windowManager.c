#include "../stdafx.h"
int makeWindowManager(WindowManager** wm){
     if((*wm)!=NULL)free(*wm);
    (*wm) = (WindowManager*)malloc(sizeof(WindowManager));
    if(*wm==NULL)return 0;
    return 1;
}

int initWindowManager(WindowManager** wm){
    if((*wm)==NULL)return 0;
    initscr();
    clear();
    (*wm)->bgColor=COLOR_BLACK;

    srand((unsigned)time(NULL));
    start_color();
    curs_set(0);
    attrset(A_BOLD);
    init_pair(COLOR_BLACK,COLOR_BLACK,(*wm)->bgColor);
    init_pair(COLOR_RED,COLOR_RED,(*wm)->bgColor);
    init_pair(COLOR_GREEN,COLOR_GREEN,(*wm)->bgColor);
    init_pair(COLOR_YELLOW,COLOR_YELLOW,(*wm)->bgColor);
    init_pair(COLOR_BLUE,COLOR_BLUE,(*wm)->bgColor);
    init_pair(COLOR_MAGENTA,COLOR_MAGENTA,(*wm)->bgColor);
    init_pair(COLOR_CYAN,COLOR_CYAN,(*wm)->bgColor);
    init_pair(COLOR_WHITE,COLOR_WHITE,(*wm)->bgColor);
}

int releaseWindowManager(WindowManager** wm){
    if((*wm)!=NULL){
       endwin();
       free(*wm);
      *wm = NULL;
    }
    return 1;
}

int updateWindowManager(WindowManager** wm){
    
}