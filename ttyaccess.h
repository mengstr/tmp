void ttygets(char *buf,int len);
void ttyputs(char *buf);
int ttygetc(void);
int ttypoll(void);
void ttystuff(char ch);
void ttyputc(char ch);
extern void(*ttybreak)();
void ttyraw(void);
void ttyrestore(void);
void ttyrestore(void);
