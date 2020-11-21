#include "../stdafx.h"

int makeKeyboardManager(KeyboardManager** km){
    if(*km!=NULL)releaseKeyboardManager(km);
    
    *km = (KeyboardManager*)malloc(sizeof(KeyboardManager));
    if(*km==NULL)return 0;

    (*km)->original_flags = fcntl(0, F_GETFL);
    return 1;
}

int initKeyboardManager(KeyboardManager** km){
    if(*km==NULL)return 0;
    (*km)->termflags = (*km)->original_flags;
    (*km)->termflags |= O_NDELAY;		
    fcntl(0, F_SETFL, (*km)->termflags);
}

int releaseKeyboardManager(KeyboardManager** km){
    if(*km!=NULL){
        (*km)->original_flags = fcntl(0, F_SETFL, (*km)->original_flags);
        free(*km);
        *km = NULL;
    }
    return 1;
}

int updateKeyboardManager(KeyboardManager** km){


}