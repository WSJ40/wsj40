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
      "***********"};//初始化这个图片 
int snake_length=5;
int snake_x[max_length]={1,2,3,4,5};
int snake_y[max_length]={1,1,1,1,1};
int main()
{
    int i=0;
    char input,c;
    //put_money();
    output();//输出这个图片 
    while(!input)
    {
        c = getch();//读取底部 
        switch (c) //移动贪吃蛇的头部 
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
void output(void)// 输出图片 
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
/*void put_money(void)//把钱随机放置 
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

void snakeHeadMove(int m,int n)// 移动贪吃蛇的头部 
{
    snake_x[snake_length]=snake_x[snake_length-1]+m;
    snake_y[snake_length]=snake_y[snake_length-1]+n;
}

int gameover(void)
{
    int i,j,mid;
    char ins;
    //if(map[snake_y[snake_length]][snake_x[snake_length]]==snake_body||map[snake_y[snake_length]][snake_x[snake_length]]=='*')
        //return 1;//如果贪吃蛇死了就返回1 
    /*else if(map[snake_y[snake_length]][snake_x[snake_length]]=='$')//吃掉钱 
        {
            mid = snake_length;
            map[snake_y[mid]][snake_x[mid]] = snake_body;//把x放在头部 
            ins = map[snake_y[mid-1]][snake_x[mid-1]];
            map[snake_y[mid-1]][snake_x[mid-1]] = map[snake_y[mid]][snake_x[mid]];
            map[snake_y[mid]][snake_x[mid]] = ins;//改变贪吃蛇的头部和x的位置 
            snake_length++;//使贪吃蛇的长度加1 
            put_money();//放钱 
            output();
            return 0;
        }*/ 
    
        
            snakemove();// 移动贪吃蛇 
            output();
            return 0;
        }


void snakemove(void)//移动贪吃蛇 
{
    int i,j;
    char ins;
    for(i=snake_length;i > 0;i--)
        {
            ins=map[snake_y[i]][snake_x[i]];
            map[snake_y[i]][snake_x[i]]=map[snake_y[i-1]][snake_x[i-1]];
            map[snake_y[i-1]][snake_x[i-1]]=ins;//移动
        }
        for(j=0;j<=snake_length;j++)//改变贪吃蛇的纵坐标 
        {
            snake_x[j]=snake_x[j+1];
            snake_y[j]=snake_y[j+1];
        }
        snake_x[snake_length]=0;
        snake_y[snake_length]=0;
}


