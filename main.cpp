/*
 * @Author: AuroraRealm 3398817447@qq.com
 * @Date: 2024-02-03 17:42:31
 * @LastEditors: AuroraRealm 3398817447@qq.com
 * @LastEditTime: 2024-02-03 18:04:01
 * @FilePath: \A-small-program\main.cpp
 */
#include <stdio.h>
#include <cstring>
#include <ctime>
#include <stdlib.h>
#include <iostream>

// 移动光标
#define CurMove(x,y) printf("\033[%d;%dH",(x),(y))
// 清屏
#define Clean() printf("\33c");

void sleep(int time) {clock_t head = clock();while (clock() - head <= time) { }}

int main()
{
  srand((unsigned)time(NULL));
  printf("欢迎使用Program 版本号:0.0.0.1 Alpha\n");
  sleep(1005);
  const char* str = "|/-\\";
  char bar[102];
  memset(bar, '\0', sizeof(bar));
  for (int i = 0; i <= 100;)
  {
    srand((unsigned)time(NULL));
    printf("[%-100s][%d%%][%c]\r", bar, i, str[i % 4]); // 格式控制
    fflush(stdout); // 刷新
    bar[i++] = '#'; // 填充数据
    sleep(rand() % 50); // 休眠
  }
  sleep(1000);
  time_t ntime = time(0);
  Clean();
  printf("现在的时间为 %s\n", ctime(&ntime));
  sleep(1500);
  Clean();
  while (1)
  {
      char command;
      printf("请输入您想要使用的功能\n\n");
      printf(" 1. 计算器 \n\n");
      printf(" 2. 退出 \n\n");
      // printf("请使用↑与↓和enter来选择或执行命令\n");
      scanf("%s", command);
      if (command == '1')
      {
        //不知道为什么，代码运行到这里是会退出，防退出也没有效果，我把这行换成其他的也没用，那干脆就把这行给删了吧
        //现在我知道是什么原因了，代码运行到这里就会疯狂输出上面printf的内容，但是不知道咋解决
      }
      if (command == '2')
      {
          exit(0);
      }
  }

  while (true){}//no exit防退出 我的Vscode不能看结果
  return 0;
} 

