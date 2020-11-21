#include "../../stdafx.h"

int makeGameScene(GameScene** gs){
    (*gs) = (GameScene*)malloc(sizeof(GameScene));
    if((*gs)==NULL)return 0;
    return 1;
}
int initGameScene(GameScene** gs){
    if(*gs==NULL)return 0;

    for(int i =0;i<(*gs)->TB_cnt;++i)
        free((*gs)->TB_Array[i]);
        
    (*gs)->TB_cnt=0;  
    return 1;
}
int releaseGameScene(GameScene** gs){
    if(*gs!=NULL){
        free(*gs);
        *gs = NULL;
    }
    return 1;
}

int updateGameScene(GameScene** gs){

}

int renderGameScene(GameScene** gs){
    
}

int addTextBlockGameScene(GameScene** gs,TextBlock* tb){
    if(*gs==NULL)return 0;
    if((*gs)->TB_cnt==MAX_TEXTBLOCK_SIZE)return 0;
    (*gs)->TB_Array[++(*gs)->TB_cnt] = tb;
    return 1;
}
int delTextBlockGameScene(GameScene** gs,TextBlock* tb){
    if(*gs==NULL)return 0;
    if((*gs)->TB_cnt==0)return 0;
    int idx = -1;
    for(int i =0;i<(*gs)->TB_cnt;++i){
        if((*gs)->TB_Array[i]==tb){
            idx=i;break;
        }
    }

    if(idx==-1)return 0;
    free((*gs)->TB_Array[idx]);
    for(int i = idx+1;(*gs)->TB_cnt;++i)
        (*gs)->TB_Array[i-1]=(*gs)->TB_Array[i];
    (*gs)->TB_cnt--;
    return 1;
}