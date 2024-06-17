#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int r, h;

  srand((unsigned int) time(NULL));  // 乱数のシード

  printf("じゃんけんぽん！（1: グー、2: チョキ、3: パー）:\n");
  r = rand() % 3 + 1;
  r = 1;  // テスト用
  scanf("%d", &h);
  printf("あなた: %d、コンピューター: %d（1: グー、2: チョキ、3: パー）\n", h, r);

  while (h == r) {
    printf("あいこでしょ！（1: グー、2: チョキ、3: パー）:\n");
    r = rand() % 3 + 1;
    r = 1;  // テスト用
    scanf("%d", &h);
    printf("あなた: %d、コンピューター: %d（1: グー、2: チョキ、3: パー）\n", h, r);
  }

  if (r == 1 && h == 3 || r == 2 && h == 1 || r == 3 && h == 2) {
    printf("あなたの勝ち！\n");
  } else {
    printf("あなたの負け！\n");
  }

  return 0;
}