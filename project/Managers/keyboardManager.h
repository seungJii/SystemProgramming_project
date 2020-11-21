typedef struct keyboardManager{
    int termflags;
    int	original_flags;
    int original_termflags;

}KeyboardManager;

int makeKeyboardManager(KeyboardManager** km);
int initKeyboardManager(KeyboardManager** km);
int releaseKeyboardManager(KeyboardManager** km);
int updateKeyboardManager(KeyboardManager** km);