typedef struct windowManager{
    WINDOW* stdsrc;
    struct winsize ws;
    int bgColor;
}WindowManager;

int makeWindowManager(WindowManager** wm);
int initWindowManager(WindowManager** wm);
int releaseWindowManager(WindowManager** wm);
int updateWindowManager(WindowManager** wm);