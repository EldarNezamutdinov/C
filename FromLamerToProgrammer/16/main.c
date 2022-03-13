#include <stdio.h>

int main(void){
  int x;
  printf("Введите чётное число: ");
  scanf("%d", &x);
  (x % 2 == 0) ? printf("Вы ввели число %d, спасибо.\n", x) : printf("Ты чё, дурак чтоли? Я просил чётное!\n");
  return 0;
}
