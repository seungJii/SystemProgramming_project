typedef struct scoreScene{

    TextBlock* TB_Array[MAX_TEXTBLOCK_SIZE];
    int TB_cnt;
}ScoreScene;

int makeScoreScene(ScoreScene** ss);
int initScoreScene(ScoreScene** ss);
int releaseScoreScene(ScoreScene** ss);
int updateScoreScene(ScoreScene** ss);
int renderScoreScene(ScoreScene** ss);

int addTextBlockScoreScene(ScoreScene** ss,TextBlock* tb);
int delTextBlockScoreScene(ScoreScene** ss,TextBlock* tb);