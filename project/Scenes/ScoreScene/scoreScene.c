#include "../../stdafx.h"

int makeScoreScene(ScoreScene** ss){
    (*ss) = (ScoreScene*)malloc(sizeof(ScoreScene));
    if((*ss)==NULL)return 0;
    return 1;
}
int initScoreScene(ScoreScene** ss){
    if(*ss==NULL)return 0;

    for(int i =0;i<(*ss)->TB_cnt;++i)
        free((*ss)->TB_Array[i]);

    (*ss)->TB_cnt=0;    
    return 1;
}
int releaseScoreScene(ScoreScene** ss){
    if(*ss!=NULL){
        free(*ss);
        *ss = NULL;
    }
    return 1;
}

int updateScoreScene(ScoreScene** ss){

}

int renderScoreScene(ScoreScene** ss){
    
}

int addTextBlockScoreScene(ScoreScene** ss,TextBlock* tb){
    if(*ss==NULL)return 0;
    if((*ss)->TB_cnt==MAX_TEXTBLOCK_SIZE)return 0;
    (*ss)->TB_Array[++(*ss)->TB_cnt] = tb;
    return 1;
}
int delTextBlockScoreScene(ScoreScene** ss,TextBlock* tb){
    if(*ss==NULL)return 0;
    if((*ss)->TB_cnt==0)return 0;
    int idx = -1;
    for(int i =0;i<(*ss)->TB_cnt;++i){
        if((*ss)->TB_Array[i]==tb){
            idx=i;break;
        }
    }

    if(idx==-1)return 0;
    free((*ss)->TB_Array[idx]);
    for(int i = idx+1;(*ss)->TB_cnt;++i)
        (*ss)->TB_Array[i-1]=(*ss)->TB_Array[i];
    (*ss)->TB_cnt--;
    return 1;
}