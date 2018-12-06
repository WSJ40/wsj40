#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define max_length 50
#define snake_body 'x'
#define snake_head 'H'
void output(void);
//void put_money(void);
void snakeHeadMove(int m,int n);
int gameover(void);
void snakemove(void);
char map[12][12]=
     {"***********",
      "*xxxxH    *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "*         *",
      "***********"};//��ʼ�����ͼƬ 
int snake_length=5;
int snake_x[max_length]={1,2,3,4,5};
int snake_y[max_length]={1,1,1,1,1};
int main()
{
    int i=0;
    char input,c;
    //put_money();
    output();//������ͼƬ 
    while(!input)
    {
        c = getch();//��ȡ�ײ� 
        switch (c) //�ƶ�̰���ߵ�ͷ�� 
            {
                case 'w': snakeHeadMove(0,-1); break;
                case 's': snakeHeadMove(0,1); break;
                case 'a': snakeHeadMove(-1,0); break;
                case 'd': snakeHeadMove(1,0); break;
            }
        input = gameover();
        if(input)
        break;
        /*if(gameover()) break;//judge if game is over
        while(getchar() != '\n')//cancel the '\n' when to entry the botton 
            break;*/    
    }
    printf("Game over!!!");
}
void output(void)// ���ͼƬ 
{
        #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
    int i =0;
    while(i<12)
    {
        printf("%s\n",map[i]);
        i++;
    }
}
/*void put_money(void)//��Ǯ������� 
{
    int x=0,y=0; 
    srand((unsigned int)time(0));
    while(map[x][y]=='*'||map[x][y]==snake_body||map[x][y]==snake_head)
    {
        x = rand()%10 + 1;
        y = rand()%10 + 1;
    }
    map[x][y] = '$';
} */ 

void snakeHeadMove(int m,int n)// �ƶ�̰���ߵ�ͷ�� 
{
    snake_x[snake_length]=snake_x[snake_length-1]+m;
    snake_y[snake_length]=snake_y[snake_length-1]+n;
}

int gameover(void)
{
    int i,j,mid;
    char ins;
    //if(map[snake_y[snake_length]][snake_x[snake_length]]==snake_body||map[snake_y[snake_length]][snake_x[snake_length]]=='*')
        //return 1;//���̰�������˾ͷ���1 
    /*else if(map[snake_y[snake_length]][snake_x[snake_length]]=='$')//�Ե�Ǯ 
        {
            mid = snake_length;
            map[snake_y[mid]][snake_x[mid]] = snake_body;//��x����ͷ�� 
            ins = map[snake_y[mid-1]][snake_x[mid-1]];
            map[snake_y[mid-1]][snake_x[mid-1]] = map[snake_y[mid]][snake_x[mid]];
            map[snake_y[mid]][snake_x[mid]] = ins;//�ı�̰���ߵ�ͷ����x��λ�� 
            snake_length++;//ʹ̰���ߵĳ��ȼ�1 
            put_money();//��Ǯ 
            output();
            return 0;
        }*/ 
    
        
            snakemove();// �ƶ�̰���� 
            output();
            return 0;
        }


void snakemove(void)//�ƶ�̰���� 
{
    int i,j;
    char ins;
    for(i=snake_length;i > 0;i--)
        {
            ins=map[snake_y[i]][snake_x[i]];
            map[snake_y[i]][snake_x[i]]=map[snake_y[i-1]][snake_x[i-1]];
            map[snake_y[i-1]][snake_x[i-1]]=ins;//�ƶ�
        }
        for(j=0;j<=snake_length;j++)//�ı�̰���ߵ������� 
        {
            snake_x[j]=snake_x[j+1];
            snake_y[j]=snake_y[j+1];
        }
        snake_x[snake_length]=0;
        snake_y[snake_length]=0;
}


