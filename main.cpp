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

void sleep(int time) {clock_t head = clock();while (clock() - head <= time) { }}

int main()
{
  srand((unsigned)time(NULL));
  printf("��ӭʹ��Program �汾��:0.0.0.1 Alpha\n");
  sleep(1000);
  const char* str = "|/-\\";
  char bar[102];
  memset(bar, '\0', sizeof(bar));
  for (int i = 0; i <= 100;)
  {
    srand((unsigned)time(NULL));
    printf("[%-100s][%d%%][%c]\r", bar, i, str[i % 4]); // ��ʽ����
    fflush(stdout); // ˢ��
    bar[i++] = '#'; // �������
    sleep(rand() % 50); // ����
  }
  sleep(1000);
  time_t ntime = time(0);
  printf("\33c");
  printf("���ڵ�ʱ��Ϊ %s\n", ctime(&ntime));
  sleep(1500);
  printf("\33c");
  while (1)
  {
      int command;
      printf("����������Ҫʹ�õĹ���\n\n");
      printf("-> 1. �ı��༭�� <-\n\n");
      printf("-> 2. �˳� <-\n\n");
      scanf("%d", command);
      if (command == 1)
      {
          printf("���ڿ�����...");
      }
      if (command == 2)
      {
          exit(0);
      }
  }
  return 0;
}
