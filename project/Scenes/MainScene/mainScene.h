typedef struct mainScene{

    TextBlock* TB_Array[MAX_TEXTBLOCK_SIZE];
    TextBlock* MenuText[3];
    TextBlock* ArrowText;
    TextBlock* TitleText[7];
    int TB_cnt;
    int select;

    int termflags;
    struct termios	original_mode;
}MainScene;


int makeMainScene(MainScene** ms);
int initMainScene(MainScene** ms);
int releaseMainScene(MainScene** ms);
int updateMainScene(MainScene** ms);
int renderMainScene(MainScene** ms);

int addTextBlockMainScene(MainScene** ms,TextBlock* tb);
int delTextBlockMainScene(MainScene** ms);




//callbackfunc
/* TextBlock Move*/
int moveDown(TextBlock* tb);